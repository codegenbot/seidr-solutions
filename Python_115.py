def max_fill(grid, capacity):
    def count_buckets(grid):
        total_buckets = 0
        for row in grid:
            total_buckets += sum(row)
        return total_buckets

    def empty_wells(grid, capacity):
        buckets_needed = 0
        buckets_overflow = count_buckets(grid) - capacity
        if buckets_overflow > 0:
            return buckets_overflow
        
        buckets_available = count_buckets(grid)
        buckets_needed = capacity - buckets_available

        if buckets_needed > 0:
            return buckets_needed
        else:
            return 0

    return empty_wells(grid, capacity)