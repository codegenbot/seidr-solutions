def max_fill(grid, capacity):
    def count_buckets(grid):
        total_buckets = 0
        for row in grid:
            total_buckets += sum(row)
        return total_buckets

    def empty_wells(grid, capacity):
        buckets_needed = 0
        buckets_overflow = count_buckets(grid) - capacity
        if buckets_overflow > capacity:
            return buckets_overflow
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    grid[i][j] = 0
                    capacity -= 1
                    buckets_needed += 1
                    if capacity <= 0:
                        break
            if capacity <= 0:
                break
        return buckets_needed

    return empty_wells(grid, capacity)