def minPath(grid, k):
    n = len(grid)
    
    queue = [(0, 0, [])]
    visited = set((0, 0))
    min_path = []

    while queue:
        x, y, path = queue.pop(0)

        if not min_path or len(path) < len(min_path):
            min_path = path

        if len(path) == k:
            return min_path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < n:
                queue.append((nx, ny, path + [grid[nx][ny]]))
                visited.add((nx, ny))

    return min_path