def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited[i][j] = True
        neighbors = [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]
        neighbors.sort(key=lambda x: (grid[x[0]][x[1]], x))

        for ni, nj in neighbors:
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                res = dfs(ni, nj, path + [grid[ni][nj]])
                if res:
                    return res

        visited[i][j] = False

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [grid[i][j]])
            if res:
                return res