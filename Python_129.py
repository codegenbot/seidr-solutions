def minPath(grid, k):
    min_value = float("inf")
    for row in grid:
        for val in row:
            min_value = min(min_value, val)
    return min_value

minPath([[1, 3], [3, 2]], 10)