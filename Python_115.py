import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    used_capacities = [0] * len(grid[0])

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] > 0:
                used_capacities[j] += min(capacity, grid[i][j])

    max_fill = 0
    for cap in used_capacities:
        max_fill += math.ceil(cap / capacity)

    return total_water - sum(used_capacities) + max_fill