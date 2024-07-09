def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]

    def dfs(i, j, remaining_steps):
        visited[i][j] = True
        next_steps = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        next_steps.sort(key=lambda x: (x[0], x[1]))

        for ni, nj in next_steps:
            if 0 <= ni < n and 0 <= nj < m and not visited[ni][nj]:
                new_remaining_steps = remaining_steps - 1
                new_path = dfs(ni, nj, new_remaining_steps)
                if new_path:
                    return [grid[i][j]] + new_path

        visited[i][j] = False

    for i in range(n):
        for j in range(m):
            path = dfs(i, j, k - 1)
            if path:
                return [grid[i][j]] + path