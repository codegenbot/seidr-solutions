def max_fill(grid, capacity):
    total_amount = 0
    left = [c for r in grid for c in r]
    right = left[::-1]
    left_ptr, right_ptr = 0, len(left) - 1
    
    while left_ptr <= right_ptr:
        if grid[0][left_ptr] < grid[0][right_ptr]:
            total_amount += grid[0][left_ptr]
            left_ptr += 1
        else:
            total_amount += grid[0][right_ptr]
            right_ptr -= 1
    
    return total_amount