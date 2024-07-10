import math


def max_fill(grid, capacity):
    max_heights = [0] * (len(grid[0]) + 1)

    for row in grid:
        temp_max_heights = [0] * (len(grid[0]) + 1)

        left_water = 0
        for i in range(len(row)):
            if row[i] > max_heights[i]:
                left_water += row[i] - max_heights[i]
            else:
                left_water = 0

            temp_max_heights[i + 1] = max_heights[i] + left_water
        max_heights = temp_max_heights

    total_water = sum(row for row in grid)

    return math.ceil(total_water / capacity)