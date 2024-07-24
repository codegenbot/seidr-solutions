def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = [[False]*n for _ in range(n)]
    queue = [(grid[0][0], [grid[0][0]])
    while queue:
        val, path = queue.pop(0)
        if len(path) == k + 1:
            return path
        for dx, dy in directions:
            x, y = divmod(path[-1] - 1, n) + (dx, dy)
            if 0 <= x < n and 0 <= y < n and not visited[x][y]:
                visited[x][y] = True
                queue.append((grid[x][y], path + [grid[x][y]]))
    return []