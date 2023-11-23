def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []

    def dfs(i, j, count):
        if count == k:
            path.append(grid[i][j])
            return

        visited[i][j] = True
        path.append(grid[i][j])

        if i > 0 and not visited[i-1][j]:
            dfs(i-1, j, count+1)
        if i < N-1 and not visited[i+1][j]:
            dfs(i+1, j, count+1)
        if j > 0 and not visited[i][j-1]:
            dfs(i, j-1, count+1)
        if j < N-1 and not visited[i][j+1]:
            dfs(i, j+1, count+1)

    for i in range(N):
        for j in range(N):
            dfs(i, j, 1)
            if len(path) == k:
                return path