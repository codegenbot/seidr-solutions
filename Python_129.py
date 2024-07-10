def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    q = [(0, 0, [m[0][0]])]
    visited = set((0, 0))
    res = []

    while q:
        x, y, path = q.pop(0)

        if len(path) == k:
            res = path
            break

        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy

            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                q.append((nx, ny, path + [m[nx][ny]]))
                visited.add((nx, ny))

    return res