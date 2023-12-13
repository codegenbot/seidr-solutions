def max_fill(grid, capacity):
    buckets_needed = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                grid[i][j] = 0
                capacity -= 1
                buckets_needed += 1
                if capacity == 0:
                    break
        if capacity == 0:
            break

    return buckets_needed