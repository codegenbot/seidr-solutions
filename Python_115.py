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
                            if capacity == 0: # Change 1: Break if capacity becomes zero
                                break
                        else:
                            buckets_needed += count_buckets(grid) # Change 3: Increment by number of buckets remaining
                            break
                if count_buckets(grid) == 0 or capacity == 0: # Change 2: Break if buckets are finished or capacity becomes zero
                    break
            if count_buckets(grid) == 0:
                break
        return buckets_needed
    
    return empty_wells(grid, capacity) # Change 4: Return buckets_needed from empty_wells function.