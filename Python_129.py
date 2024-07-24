def minPath(grid, k):
    n = len(grid)
    seen = set()
    queue = [(0, (grid[0][0],))]
    min_path = []

    while queue:
        x, path = queue.pop(0)
        if len(path) > k:
            continue
        if len(path) == k:
            if path not in min_path or min_path == [path]:
                min_path.append(path)

        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in seen:
                queue.append(((nx, ny), path + (grid[nx][ny],)))
                seen.add((nx, ny))

    return [i for i in min_path[0]]