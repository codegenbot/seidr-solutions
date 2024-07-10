def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    filled_buckets = 0
    remaining_water = 0

    while True:
        buckets_needed = math.ceil(total_water / float(capacity))
        if buckets_needed > filled_buckets:
            filled_buckets = buckets_needed
            remaining_water = (filled_buckets * capacity - total_water) or 0

        total_water -= remaining_water
        if total_water == 0:
            return filled_buckets