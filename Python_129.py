def minPath(grid, k):
    n = len(grid)
    seen = set()
    queue = [(0, [grid[0][0]])]  # start from top left
    while queue:
        val, path = queue.pop(0)
        if len(path) == k:
            return path
        for x, y in [(1, 0), (0, 1), (-1, 0), (0, -1)]:
            nx, ny = x + path[-1][0], y + path[-1][1]
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in seen:
                seen.add((nx, ny))
                queue.append(((grid[nx][ny]), path + [(grid[nx][ny])]))
    return []