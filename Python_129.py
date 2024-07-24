def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = [[False] * n for _ in range(n)]
    queue = [(grid[0][0], [(grid[0][0],)], 0)]
    result = []

    while queue:
        value, path, length = queue.pop(0)
        if length == k:
            return path
        for dx, dy in directions:
            x, y = (x + dx) % n, (y + dy) % n
            if visited[x][y]:
                continue
            visited[x][y] = True
            new_path = path + [(grid[x][y],)]
            queue.append((grid[x][y], new_path, length + 1))
    return []