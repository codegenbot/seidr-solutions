```
def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    water_per_bucket = math.ceil(total_water / float(capacity))
    return -(-total_water // water_per_bucket)