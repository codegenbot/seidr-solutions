def max_fill(grid, capacity):
    count = 0
    for i in range(len(grid)):
        row = grid[i]
        length = len(row)
        num_buckets = 0
        for j in range(length):
            if row[j] == 1:
                num_buckets += 1
        total_capacity = num_buckets * capacity
        if total_capacity > length:
            count += (total_capacity - length) // capacity
    return count