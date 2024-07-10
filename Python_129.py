def minPath(grid, k):
    N = len(grid)
    seen = set()
    queue = [(grid[0][0], [grid[0][0]])]

    while queue:
        val, path = queue.pop(0)
        if len(path) == k + 1:
            return path
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = divmod((path[-1] - 1) // N + dx, N + dy)
            if 0 <= x < N and 0 <= y < N and val + N * N + 1 == grid[x][y]:
                new_val = val
                new_path = path + [grid[x][y]]
                if tuple(sorted(new_path)) not in seen:
                    queue.append((new_val, new_path))
                    seen.add(tuple(sorted(new_path)))

    return []