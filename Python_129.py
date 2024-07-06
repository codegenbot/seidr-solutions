def minPath(grid, k):
    n = len(grid)
    for i in range(n):
        for j in range(n):
            grid[i][j] *= i + j

    visited = set()
    queue = [(0, 0, [grid[0][0]])]

    while queue:
        x, y, path = queue.pop(0)

        if sum(path) == k:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] not in visited:
                queue.append((nx, ny, path + [grid[nx][ny]]))
                visited.add(grid[nx][ny])

    return []