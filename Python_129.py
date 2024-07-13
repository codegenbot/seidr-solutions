def minPath(grid, k):
    n = len(grid)
    m = [(i, j) for i in range(n) for j in range(n)]
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path)
            return

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in m:
                continue

            m.remove((ni, nj))
            dfs(ni, nj, path + [grid[ni][nj]])
            m.add((ni, nj))

    for i in range(n):
        for j in range(n):
            m.add((i, j))
            dfs(i, j, [grid[i][j]])
            m.remove((i, j))

    return res