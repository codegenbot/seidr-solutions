def max_fill(grid, capacity):
    buckets_needed = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if capacity > 0:
                    grid[i][j] = 0
                    capacity -= 1
                    buckets_needed += 1
                else:
                    return buckets_needed
    
    return buckets_needed