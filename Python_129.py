def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    result = []

    def dfs(i, j, path):
        nonlocal result
        if len(path) == k:
            result.append(path[:])
            return
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n:
                m[ni][nj] -= 1
                dfs(ni, nj, path + [m[i][j]])
                m[ni][nj] += 1

    for i in range(n):
        for j in range(n):
            if m[i][j] == 0:
                dfs(i, j, [m[i][j]])
    return min(result)[::-1]