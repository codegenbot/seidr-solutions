def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k + 1:
            return path

        visited[i][j] = True
        for dx, dy in directions:
            ni, nj = i + dx, j + dy
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[ni][nj]])
                if new_path:
                    return new_path

        visited[i][j] = False

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path