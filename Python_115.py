def max_fill(grid, capacity):
    num_buckets_per_row = {}

    for i in range(len(grid)):
        row = grid[i]
        length = len(row)
        num_buckets = 0

        for j in range(length):
            if row[j] == 1:
                num_buckets += 1

        total_capacity = num_buckets * capacity

        if total_capacity > length:
            count = (total_capacity - length) // capacity

    total_capacity = sum(num_buckets for num_buckets in num_buckets_per_row.values())
    return total_capacity // capacity