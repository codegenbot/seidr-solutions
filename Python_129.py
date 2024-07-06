def minPath(grid, k):
    n = len(grid)
    m = [[0 for _ in range(n)] for _ in range(n)]

    visited = set()
    queue = [(0, 0, []) for _ in range(len(grid) ** 2)]

    while queue:
        x, y, path = queue.pop(0)

        if len(path) == k:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                queue.append((nx, ny, path + [(nx * n) + ny]))
                visited.add((nx, ny))

    return []