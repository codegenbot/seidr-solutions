```
def max_fill(grid, capacity):
    total_capacity = sum(cap for row in grid for cap in row)
    return math.ceil(total_capacity / capacity)