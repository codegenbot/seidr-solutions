def minPath(grid, k):
    n = len(grid)
    seen = set()
    queue = [(grid[0][0], [grid[0][0]])]

    while queue:
        val, path = queue.pop(0)
        if len(path) == k + 1:
            return path
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = divmod(path[-1] - 1, n) + (dx, dy)
            if 0 <= x < n and 0 <= y < n and val + n * n + 1 == grid[x][y]:
                new_path = path + [grid[x][y]]
                tuple_path = tuple(sorted(new_path))
                if tuple_path not in seen:
                    queue.append((grid[x][y], new_path))
                    seen.add(tuple_path)
    return []