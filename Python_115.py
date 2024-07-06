```
def max_fill(grid, capacity):
    rows = [min(c for c in row) for row in grid]
    return math.ceil(sum(min(row) for row in rows) / capacity)