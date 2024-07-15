def max_fill(grid, capacity):
    required_buckets = 0
    for row in grid:
        current_water = 0
        for well in row:
            if well > 0:
                current_water += well
                if current_water > capacity:
                    required_buckets += 1
                    current_water = well
    if current_water > 0:
        required_buckets += 1
    return required_buckets * capacity - sum([sum(row) for row in grid])