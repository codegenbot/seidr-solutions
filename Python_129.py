def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for i in range(n)] for j in range(n)]

    visited = set()
    queue = [(0, 0, [m[0][0]]) for _ in range(len(grid) ** 2)]

    while queue:
        x, y, path = queue.pop(0)

        if len(path) == k:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if 0 <= nx < n and 0 <= ny < n and m[nx][ny] not in visited:
                queue.append((nx, ny, path + [m[nx][ny]]))
                visited.add(m[nx][ny])

    return []