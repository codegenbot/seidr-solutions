def max_fill(grid, capacity):
    n = len(grid)
    total_water = sum(sum(row) for row in grid)
    full_cycles = math.ceil(total_water / float(capacity))
    remaining_water = total_water % capacity
    cycles_per_bucket = [math.ceil(len(row) * row.count(1) / float(capacity)) if row.count(1) > 0 else 0 for row in grid]
    
    return full_cycles + sum(cycle - 1 for cycle in cycles_per_bucket) + (remaining_water > 0)