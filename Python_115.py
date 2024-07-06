```
def max_fill(grid, capacity):
    total_amount = 0
    left_to_right = [c for r in grid for c in r]
    right_to_left = left_to_right[::-1]
    
    left_ptr, right_ptr = 0, len(left_to_right) - 1
    
    while left_ptr <= right_ptr:
        min_capacity = min(capacity, int(left_to_right[left_ptr]), int(right_to_left[right_ptr]))
        
        total_amount += min_capacity
        left_to_right[left_ptr] -= min_capacity
        right_to_left[right_ptr] -= min_capacity
        
        if int(left_to_right[left_ptr]) == 0:
            left_ptr += 1
        if int(right_to_left[right_ptr]) == 0:
            right_ptr -= 1
    
    return total_amount