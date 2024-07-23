def minPath(grid):
    n = len(grid)
    m = [[0] * n for _ in range(n)]

    for i in range(n):
        for j in range(n):
            if i > 0:
                m[i][j] += m[i - 1][j]
            if j > 0:
                m[i][j] += m[i][j - 1]

    return m[-1][-1]