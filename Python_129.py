def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    queue = [(grid[0][0], [grid[0][0]], 1)]
    min_path = []

    while queue:
        val, path, steps = queue.pop(0)
        if steps == k:
            return path
        for dx, dy in directions:
            x, y = (x + dx) % n, (y + dy) % n
            if not visited[x][y] and (x, y) != (0, 0):
                visited[x][y] = True
                queue.append((grid[x][y], path + [grid[x][y]], steps + 1))
    return []