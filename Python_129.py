def minPath(grid, k):
    n = len(grid)
    res = []
    queue = [(grid[0][0], [grid[0][0]])]  # (value, path)

    while queue:
        val, path = queue.pop(0)
        res.append(val)
        
        if len(path) == k:
            return path
        
        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            x, y = divmod(path[-1] - n, n)[1:]
            new_x, new_y = x + dx, y + dy
            if 0 <= new_x < n and 0 <= new_y < n and (new_x * n + new_y) not in path:
                queue.append((grid[new_x][new_y], path + [grid[new_x][new_y]]))