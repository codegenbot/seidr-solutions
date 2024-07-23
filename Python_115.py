import math


def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])

    total_water = sum(1 for row in grid for cell in row if cell == 1)
    total_buckets = -(-total_water // float(capacity))
    return int(total_buckets)


# usage
grid = [[1, 0, 1], [0, 1, 0], [1, 0, 1]]
capacity = 2
print(max_fill(grid, capacity))