def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    visited = set()
    queue = [(0, 0, [m[0][0]])]

    while queue:
        x, y, path = queue.pop(0)

        if len(path) == k:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                visited.add((nx, ny))
                queue.append(((nx, ny), path + [m[nx][ny]]))

    return []