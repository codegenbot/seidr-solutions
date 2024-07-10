def minPath(grid, k):
    n = len(grid)
    seen = set()
    queue = [(grid[0][0], [grid[0][0]])]

    while queue:
        (val, path) = queue.pop(0)

        if len(path) == k + 1:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = divmod((path[-1] - 1) // n + dx, n + dy)
            if 1 <= x < n and 1 <= y < n and (val := grid[x][y]) not in seen:
                queue.append(((val, path + [val])))
                seen.add(val)

    return []