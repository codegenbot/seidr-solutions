def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = [[False] * n for _ in range(n)]

    def dfs(x, y, path):
        if len(path) == k:
            return path

        visited[x][y] = True
        min_val = float("inf")
        next_x, next_y = -1, -1

        for dx, dy in directions:
            new_x, new_y = x + dx, y + dy
            if 0 <= new_x < n and 0 <= new_y < n and not visited[new_x][new_y]:
                if grid[new_x][new_y] < min_val:
                    min_val = grid[new_x][new_y]
                    next_x, next_y = new_x, new_y

        return dfs(next_x, next_y, path + [grid[next_x][next_y]])

    start_val = min(min(row) for row in grid)
    start_coords = [
        (i, j) for i in range(n) for j in range(n) if grid[i][j] == start_val
    ]

    result = []
    for x, y in start_coords:
        visited = [[False] * n for _ in range(n)]
        path = dfs(x, y, [start_val])
        if not result or path < result:
            result = path

    return result