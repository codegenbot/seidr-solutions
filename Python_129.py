def minPath(grid):
    n = len(grid)
    m = [[float("inf")] * (n + 1) for _ in range(n + 1)]
    m[0][0] = grid[0][0]

    for i in range(1, n):
        m[i][0] = min(m[i - 1][0], grid[i][0])

    for j in range(1, n):
        m[0][j] = min(m[0][j - 1], grid[0][j])

    for i in range(1, n):
        for j in range(1, n):
            m[i][j] = min(min(m[i - 1][j], m[i][j - 1]), grid[i][j])

    path = []

    def backtrack(i, j, length):
        nonlocal path
        if length == 0:
            return True

        for direction in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + direction[0], j + direction[1]

            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] == m[i][j] + grid[i][j]:
                path.append(grid[i][j])
                backtrack(ni, nj, length - 1)
                path.pop()
                if not backtrack(ni, nj, length - 1):
                    return False
        return True

    for i in range(n):
        for j in range(n):
            if m[i][j] == min(m[0][n - 1], m[n - 1][0]):
                path.append(grid[i][j])
                if backtrack(i, j, m[i][j]):
                    return path
                path.pop()

    return []