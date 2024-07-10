def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited[i][j] = True
        for x, y in [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]:
            if 0 <= x < N and 0 <= y < N and not visited[x][y]:
                new_path = dfs(x, y, path + [grid[x][y]])
                if new_path:
                    return new_path

        visited[i][j] = False

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path