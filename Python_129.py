def minPath(grid, k):
    n = len(grid)
    visited = set()
    queue = [(grid[0][0], [grid[0][0]]) for _ in range(n * n)]

    while queue:
        val, path = queue.pop(0)
        if len(path) == k:
            return path
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = divmod(val - 1, n)
            new_val = grid[x][y]
            if new_val not in visited and new_val != val:
                queue.append((new_val, path + [new_val]))
                visited.add(new_val)
    return []