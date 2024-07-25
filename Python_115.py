```
def max_fill(grid, capacity):
    if not grid:
        return 0

    left_max = [0] * len(grid[0])
    right_max = [0] * len(grid[0])

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if i == 0:
                left_max[j] = grid[i][j]
            else:
                left_max[j] = max(left_max[j], grid[i][j])
        for j in range(len(grid[0])):
            if i == len(grid) - 1:
                right_max[j] = grid[i][j]
            else:
                right_max[j] = max(right_max[j], grid[i][j])

    total_water = 0
    for i in range(len(grid)):
        left_height = left_max[:]
        right_height = right_max[:]
        for j in range(len(grid[0])):
            if i > 0:
                left_height[j] -= grid[i - 1][j]
            if i < len(grid) - 1:
                right_height[j] -= grid[i + 1][j]
            water_height = min(left_height[j], right_height[j])
            total_water += water_height
    return math.ceil(total_water / capacity)