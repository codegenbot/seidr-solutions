import math

def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        left_max = [0] * len(grid[0])
        right_max = [0] * len(grid[0])
        for j in range(len(grid[0])):
            if i == 0:
                left_max[j] = grid[i][j]
            else:
                left_max[j] = max(left_max[j], grid[i][j])
        for j in reversed(range(len(grid[0]))):
            if i == len(grid) - 1:
                right_max[j] = grid[i][j]
            else:
                right_max[j] = max(right_max[j], grid[i][j])
        for j in range(len(grid[0])):
            h = min(left_max[j], right_max[j])
            total_water += h - grid[i][j]
    return math.ceil(total_water / capacity)