def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []

    def dfs(i, j, steps):
        if i < 0 or i >= N or j < 0 or j >= N or visited[i][j]:
            return
        visited[i][j] = True
        path.append(grid[i][j])
        if steps == k:
            return
        dfs(i + 1, j, steps + 1)
        dfs(i - 1, j, steps + 1)
        dfs(i, j + 1, steps + 1)
        dfs(i, j - 1, steps + 1)
        visited[i][j] = False
        path.pop()

    for i in range(N):
        for j in range(N):
            dfs(i, j, 1)

    return path