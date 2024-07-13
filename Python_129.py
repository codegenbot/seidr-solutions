def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = set()
    queue = [(i, j, [grid[i][j]]) for i in range(n) for j in range(n)]
    min_path = []

    while queue:
        x, y, path = queue.pop(0)

        if len(path) == k + 1:
            if not min_path or tuple(sorted(path)) < tuple(sorted(min_path)):
                min_path = path
            continue

        for dx, dy in directions:
            nx, ny = x + dx, y + dy

            if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < n:
                queue.append((nx, ny, path + [grid[nx][ny]]))
                visited.add((nx, ny))

    return min_path