```
def max_fill(grid, capacity):
    total_water = sum(min(capacity // len(row) + 1 for row in grid))
    return math.ceil(total_water / float(capacity))