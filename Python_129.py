def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    visited = set()
    queue = [(0, [m[0][0]])]

    while queue:
        (step, path) = queue.pop(0)

        if step == k:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = divmod(path[-1] - 1 + dx, n) + dy
            new_path = list(path)
            if (x, y) not in visited and 1 <= x < n and 1 <= y < n:
                queue.append((step + 1, new_path + [m[x][y]]))
                visited.add((x, y))

    return []