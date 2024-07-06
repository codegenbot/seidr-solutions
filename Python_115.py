```
def max_fill(grid, capacity):
    if capacity <= 0:
        return 0
    total_amount = 0
    left = [c for r in grid for c in r]
    right = left[::-1]
    left_ptr, right_ptr = 0, len(left) - 1
    
    while left_ptr <= right_ptr:
        half = min(capacity, (left[left_ptr] + right[right_ptr])) // 2
        total_amount += half * 2
        left[left_ptr] -= half
        right[right_ptr] -= half
        if left[left_ptr] == 0:
            left_ptr += 1
        if right[right_ptr] == 0:
            right_ptr -= 1
    
    return total_amount