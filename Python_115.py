import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / float(capacity))


print(max_fill([[1, 0, 2], [3, 4, 5], [1, 2, 3]], 10))