def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    dir8 = [(0, 1), (0, -1), (1, 0), (-1, 0), (1, 1), (-1, -1), (1, -1), (-1, 1)]
    res = []

    def dfs(i, j):
        if visited[i][j]:
            return
        visited[i][j] = True
        path = [grid[i][j]]
        for _ in range(k - 1):
            for dx, dy in dir8:
                x, y = i + dx, j + dy
                if 0 <= x < N and 0 <= y < N and not visited[x][y]:
                    dfs(x, y)
                    path.append(grid[x][y])
                    break
        res = [x for x in set(path) if path.count(x) == k]
        res.sort()
        return res

    for i in range(N):
        for j in range(N):
            res = dfs(i, j)
            if len(res) > 0:
                return res