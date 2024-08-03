def minPath(grid, k):
    N = len(grid)
    seen = set()
    queue = [(grid[0][0], [(grid[0][0],)])]
    while queue:
        val, path = queue.pop(0)
        if len(path) == k + 1:
            return path
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = divmod(path[-1][0] + dx, N) + divmod(path[-1][1] + dy, N)
            if 0 <= x < N and 0 <= y < N and grid[x][y] not in seen:
                queue.append((grid[x][y], path + [(grid[x][y],)]))
                seen.add(grid[x][y])
    return []