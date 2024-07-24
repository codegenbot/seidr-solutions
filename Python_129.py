def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]

    def dfs(i, j, path):
        if len(path) == k - 1:
            return path

        visited[i][j] = True
        neighbors = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        neighbors.sort(key=lambda x: (grid[x[0]][x[1]], x))

        for ni, nj in neighbors:
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                res = dfs(ni, nj, path + [grid[ni][nj]])
                if res:
                    return res

        visited[i][j] = False

    for i in range(N):
        for j in range(N):
            res = dfs(i, j, [grid[i][j]])
            if res:
                return res