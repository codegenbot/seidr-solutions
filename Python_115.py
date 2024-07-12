```Python
import math

def max_fill(n, grid):
    total_water = 0
    left_max = [0]*len(grid)
    right_max = [0]*len(grid)

    for i in range(len(grid)):
        left_max[i] = max(left_max[i], grid[i][0])
        right_max[-1-i] = max(right_max[-1-i], grid[i][-1])

    for i in range(1, len(grid)):
        left_max[i] = max(left_max[i], left_max[i-1])
        right_max[-1-i] = max(right_max[-1-i], right_max[-2-i])

    for i in range(len(grid)):
        width = 1
        if grid[i][0] < left_max[i]:
            width += 1
        if grid[i][-1] < right_max[-1-i]:
            width += 1

        height = min(left_max[i], right_max[-1-i])
        total_water += max(0, height) * width

    return math.ceil(total_water / (n * min(max(row) for row in grid)))