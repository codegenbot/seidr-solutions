```
def max_fill(grid, capacity):
    total_water = sum((min(row[i], col) for i in range(len(row))) for row, col in zip(*grid)) // 2
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed