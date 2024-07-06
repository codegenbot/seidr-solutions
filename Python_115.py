def max_fill(grid, capacity):
    total_amount = 0
    left = [c for r in grid for c in r]
    right = left[::-1]
    left_ptr, right_ptr = 0, len(left) - 1

    while left_ptr <= right_ptr:
        if left[left_ptr] < capacity and right[right_ptr] < capacity:
            max_amount = min(capacity, left[left_ptr]) // 2 * 2
            total_amount += max_amount
            left[left_ptr] -= (min(capacity, left[left_ptr])) // 2
            right[right_ptr] -= (min(capacity, left[left_ptr])) // 2
        elif left[left_ptr] < capacity:
            total_amount += min(capacity, left[left_ptr]) // 2 * 2
            left[left_ptr] -= (min(capacity, left[left_ptr])) // 2
            left_ptr += 1
        else:
            total_amount += min(capacity, right[right_ptr]) // 2 * 2
            right[right_ptr] -= (min(capacity, right[right_ptr])) // 2
            right_ptr -= 1

    return total_amount