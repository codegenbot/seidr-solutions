def minPath(grid, k):
    n = len(grid)
    path = set()
    queue = [(grid[0][0], [grid[0][0]])]

    while queue:
        val, path_val = queue.pop(0)
        if len(path_val) == k + 1:
            if not path or tuple(sorted(path_val)) < tuple(sorted(path)):
                path = set(path_val)
            continue

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = divmod(path_val[-1] - 1, n) + (dx, dy)
            if 0 <= x < n and 0 <= y < n:
                new_val = grid[x][y]
                queue.append((new_val, path_val + [new_val]))

    return sorted(list(path))