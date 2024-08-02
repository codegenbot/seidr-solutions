def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]

    def dfs(x, y, path):
        if len(path) == k:
            return path

        visited[x][y] = True
        neighbors = [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]
        neighbors.sort(
            key=lambda pos: (
                (
                    grid[pos[0]][pos[1]]
                    if 0 <= pos[0] < n and 0 <= pos[1] < n
                    else float("inf")
                ),
                pos,
            )
        )

        for nx, ny in neighbors:
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                res = dfs(nx, ny, path + [grid[nx][ny]])
                if res and len(res) == k:
                    return res

        visited[x][y] = False

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if path and len(path) == k:
                return path