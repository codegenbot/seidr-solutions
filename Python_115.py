def max_fill(grid, capacity):
    result = 0
    for row in grid:
        remaining_capacity = capacity
        for well in row:
            if well == 1 and remaining_capacity > 0:
                result += 1
                remaining_capacity -= 1
    return result