```
def max_fill(grid, capacity):
    total_amount = 0
    left = [c for r in grid for c in r]
    right = left[::-1]
    left_ptr, right_ptr = 0, len(left) - 1
    
    while left_ptr <= right_ptr:
        if left[left_ptr] < right[right_ptr]:
            total_amount += min(capacity, left[left_ptr])
            left[left_ptr] -= (min(capacity, left[left_ptr]))
            left_ptr += 1
        else:
            total_amount += min(capacity, right[right_ptr])
            right[right_ptr] -= (min(capacity, right[right_ptr]))
            right_ptr -= 1
    
    return total_amount