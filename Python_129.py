def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    queue = [(0, [m[0][0]], 1)]
    visited = set((m[0][0],))
    res = []

    while queue:
        x, path, length = queue.pop(0)

        if length > k:
            continue

        if length == k:
            res = path
            break

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                queue.append((nx, path + [m[nx][ny]], length + 1))
                visited.add((nx, ny))

    return res