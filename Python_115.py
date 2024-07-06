def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / float(capacity))
    water_per_bucket = total_water / buckets_needed
    remaining_water = (
        total_water % buckets_needed * water_per_bucket
        if total_water % buckets_needed != 0
        else 0
    )
    return max(
        buckets_needed, math.ceil((total_water + remaining_water) / float(capacity))
    )