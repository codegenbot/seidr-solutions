def max_fill(grid, capacity):
    def count_buckets(grid):
        total_buckets = 0
        for row in grid:
            total_buckets += sum(row)
        return total_buckets
    
    def empty_wells(grid, capacity):
        buckets_needed = 0
        for _ in range(capacity):
            for i in range(len(grid)):
                for j in range(len(grid[i])):
                    if grid[i][j] == 1:
                        grid[i][j] = 0
                        capacity -= 1
                        buckets_needed += 1
                        if capacity == 0:
                            return buckets_needed
            if count_buckets(grid) == 0:
                break
        return buckets_needed + count_buckets(grid)
    
    return empty_wells(grid, capacity)