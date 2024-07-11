def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path)
            return True

        if not visited[i][j]:
            visited[i][j] = True
            for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
                if 0 <= x < N and 0 <= y < N and not visited[x][y]:
                    dfs(x, y, path + [grid[x][y]])
            visited[i][j] = False

        return False

    for i in range(N):
        for j in range(N):
            if dfs(i, j, [grid[i][j]]):
                return res