def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    path = []

    def dfs(i, j, temp_path):
        nonlocal path
        if len(temp_path) == k:
            path = temp_path[:]
            return
        visited[i][j] = True
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                dfs(ni, nj, temp_path + [grid[ni][nj]])
        visited[i][j] = False

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])

    return path