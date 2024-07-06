```Python
def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += sum(1 for x in row if x == capacity)
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed