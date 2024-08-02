```
def minPath(grid, k):
    n = len(grid)
    seen = set()
    queue = [(grid[0][0], [grid[0][0]])]

    while queue:
        val, path = queue.pop(0)
        if len(path) == k + 1:
            return path
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = (path[-1] - 1) // n, (path[-1] - 1) % n
            x += dx
            y += dy
            if 0 <= x < n and 0 <= y < n and val + n * x + y not in seen:
                queue.append((val + n * x + y, path + [val + n * x + y]))
                seen.add(val + n * x + y)

    return []