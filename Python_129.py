def shortestPathLength(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    queue = [
        (i, j, [grid[i][j]]) for i in range(n) for j in range(n) if grid[i][j] == k
    ]
    min_len = float("inf")

    while queue:
        x, y, path = queue.pop(0)

        if len(path) < min_len:
            min_len = len(path)
        else:
            continue

        for dx, dy in directions:
            nx, ny = x + dx, y + dy

            if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] == k:
                queue.append((nx, ny, path + [grid[nx][ny]]))

    return [grid[i][j] for i in range(n) for j in range(n) if grid[i][j] == k][:min_len]