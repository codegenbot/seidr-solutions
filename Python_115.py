def max_fill(grid: List[List[int]], capacity: int) -> int:
    m, n = len(grid), len(grid[0])
    row_sum = [sum(row) for row in grid]
    row_sum.sort(reverse=True)

    water_left = sum(grid[i][j] for i in range(m) for j in range(n))
    res = 0
    while water_left > 0:
        bucket_cap = min(capacity, water_left)
        water_left -= bucket_cap
        res += 1

        capacity -= bucket_cap
    return math.ceil(
        sum(row_sum[i] - max(0, row_sum[i] - capacity) for i in range(m))
        / (capacity or 1)
    )