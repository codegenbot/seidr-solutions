Here is the completed code:

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    total_buckets = math.ceil(total_water / float(capacity))
    return total_buckets - 1 if total_buckets > 0 else 0