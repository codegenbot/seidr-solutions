import math


def max_fill(grid, capacity):
    total_water = 0
    for row_index in range(len(grid)):
        for cell_index in range(len(grid[0])):
            if (
                row_index == 0
                or grid[row_index][cell_index] > grid[row_index - 1][cell_index]
            ):
                grid[row_index][cell_index] = grid[row_index - 1][cell_index]
            elif (
                row_index == len(grid) - 1
                or grid[row_index][cell_index] > grid[row_index + 1][cell_index]
            ):
                grid[row_index][cell_index] = grid[row_index + 1][cell_index]
            total_water += (
                min(bucket for bucket in [row[cell_index]] * 2)
                - grid[row_index][cell_index]
            )
    return math.ceil(total_water / capacity)