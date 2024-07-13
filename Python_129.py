def minPath(grid, k):
    n = len(grid)
    seen = set()
    queue = [(grid[0][0], [grid[0][0]])
    for _ in range(k):
        new_queue = []
        while queue:
            val, path = queue.pop(0)
            if len(path) == k:
                return path
            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                x, y = divmod((path[-1] - 1) // n + dx, n + dy)
                if 0 <= x < n and 0 <= y < n and val + n * n + 1 == grid[x][y]:
                    new_queue.append((grid[x][y], path + [grid[x][y]]))
        queue = new_queue
    return []