def minPath(grid, k):
    N = len(grid)
    res = []
    visited = [[False] * N for _ in range(N)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        if visited[i][j]:
            return None

        visited[i][j] = True
        res.append(grid[i][j])

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N:
                p = dfs(ni, nj, path + [grid[ni][nj]])
                if p is not None:
                    return p

        visited[i][j] = False
        res.pop()
        return None

    for i in range(N):
        for j in range(N):
            p = dfs(i, j, [grid[i][j]])
            if p is not None:
                return p