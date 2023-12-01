def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    path = []

    def dfs(i, j, length):
        if i < 0 or i >= n or j < 0 or j >= n or visited[i][j]:
            return
        visited[i][j] = True
        path.append(grid[i][j])
        if length == k:
            return
        dfs(i + 1, j, length + 1)
        dfs(i - 1, j, length + 1)
        dfs(i, j + 1, length + 1)
        dfs(i, j - 1, length + 1)

    for i in range(n):
        for j in range(n):
            dfs(i, j, 1)
            if len(path) == k:
                return path

    return path