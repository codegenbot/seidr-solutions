def minPath(grid, k):
    N = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path[:])
            return

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and (ni, nj) not in set(path):
                path.append(grid[ni][nj])
                dfs(ni, nj, path)
                path.pop()

    for i in range(N):
        for j in range(N):
            dfs(i, j, [grid[i][j]])

    return res