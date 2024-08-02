def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    visited = [[False] * n for _ in range(n)]

    def dfs(x, y, path):
        if len(path) == k:
            return path

        visited[x][y] = True
        min_val = float("inf")
        next_x, next_y = -1, -1
        found = False 

        for dx, dy in directions:
            new_x, new_y = x + dx, y + dy
            if 0 <= new_x < n and 0 <= new_y < n and not visited[new_x][new_y]:
                if grid[new_x][new_y] < min_val:
                    min_val = grid[new_x][new_y]
                    next_x, next_y = new_x, new_y
                    found = True

        if not found:  # if no next step is found, return the current path
            return path

        return dfs(next_x, next_y, path + [grid[next_x][next_y]])

    min_val = float("inf")
    start_x, start_y = -1, -1
    for i in range(n):
        for j in range(n):
            if grid[i][j] < min_val:
                min_val = grid[i][j]
                start_x, start_y = i, j

    return dfs(start_x, start_y, [grid[start_x][start_y]])