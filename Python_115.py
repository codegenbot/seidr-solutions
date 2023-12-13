def max_fill(grid, capacity):
    def count_buckets(grid):
        total_buckets = 0
        for row in grid:
            total_buckets += sum(row)
        return total_buckets
    
    def empty_wells(grid, capacity):
        buckets_needed = 0
        while count_buckets(grid) > 0:
            for i in range(len(grid)):
                for j in range(len(grid[i])):
                    if grid[i][j] == 1:
                        if capacity > 0:
                            grid[i][j] = 0
                            capacity -= 1
                        else:
                            buckets_needed += 1
            if capacity == 0:
                break
        buckets_needed += count_buckets(grid)
        return buckets_needed
    
    return empty_wells(grid, capacity)