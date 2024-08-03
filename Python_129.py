def minPath(grid, k):
    n = len(grid)
    seen = set()
    queue = [(grid[0][0], [grid[0][0]])]
    result = None
    while queue:
        val, path = queue.pop(0)
        if len(path) > k:
            continue
        for dx in [-1, 0, 1]:
            for dy in [-1, 0, 1]:
                x, y = divmod(path[-1] - n, n)
                nx, ny = x + dx, y + dy
                if 0 <= nx < n and 0 <= ny < n:
                    new_val = grid[nx][ny]
                    if new_val not in seen:
                        seen.add(new_val)
                        queue.append((new_val, path + [new_val]))
        if len(path) == k:
            if result is None or tuple(sorted(path)) < tuple(sorted(result)):
                result = path
    return list(result)