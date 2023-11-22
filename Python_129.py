def minPath(grid, k):
    m, n = len(grid), len(grid[0])
    total_elements = m * n

    if k > total_elements:
        repeats = (k - 1) // total_elements
        remainder = (k - 1) % total_elements
        path = []
        for _ in range(repeats):
            path.extend(grid[i][j] for i in range(m) for j in range(n))
        path.extend(
            grid[i][j]
            for i in range(remainder // m + 1)
            for j in range(remainder % n + 1)
        )
        return path

    # ... rest of the code remains the same