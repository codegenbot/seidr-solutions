def minPath(grid, k):
    N = len(grid)
    seen = set()
    queue = [(0, ())]
    res = None
    for _ in range(N * N):
        while queue:
            val, path = queue.pop(0)
            if (val, frozenset(path)) in seen:
                continue
            seen.add((val, frozenset(path)))
            new_path = list(path)
            if len(new_path) == k + 1:
                res = tuple(sorted(new_path))
                return res
            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                x, y = divmod(path[-1] - 1, N) + (dx, dy)
                if 0 <= x < N and 0 <= y < N and (val := grid[x][y]) not in path:
                    queue.append((val, new_path + [N * x + y + 1]))
    return res