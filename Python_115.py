def max_fill(grid, capacity):
    total_amount = 0
    left = [c for r in grid for c in r]
    right = left[::-1]
    left_ptr, right_ptr = 0, len(left) - 1
    
    while left_ptr <= right_ptr:
        if left[left_ptr] < capacity and right[right_ptr] < capacity:
            amount_to_fill = min(capacity, left[left_ptr]) // 2 * 2
            total_amount += amount_to_fill
            left[left_ptr] -= amount_to_fill
            right[right_ptr] -= amount_to_fill
            left_ptr += 1
            right_ptr -= 1
        elif left[left_ptr] < capacity:
            amount_to_fill = min(capacity, left[left_ptr]) // 2 * 2
            total_amount += amount_to_fill
            left[left_ptr] -= amount_to_fill
            left_ptr += 1
        else:
            amount_to_fill = min(capacity, right[right_ptr]) // 2 * 2
            total_amount += amount_to_fill
            right[right_ptr] -= amount_to_fill
            right_ptr -= 1
    
    return total_amount