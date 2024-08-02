def minPath(grid, k):
    N = len(grid)
    seen = set()
    queue = [(grid[0][0], [grid[0][0]])]

    while queue:
        val, path = queue.pop(0)

        if len(path) == k + 1:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = 0, 0
            x, y = (max(0, min(N-1, x + dx)), max(0, min(N-1, y + dy)))

            if (x, y) not in seen and grid[x][y] not in path:
                queue.append((grid[x][y], path + [grid[x][y]]))
                seen.add((x, y))

    return []