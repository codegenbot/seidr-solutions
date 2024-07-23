def minPath(grid, k):
    m = len(grid)
    res = []
    queue = [
        (i, j, [grid[i][j]], {grid[i][j]: 1})
        for i in range(m)
        for j in range(len(grid[0]))
        if grid[i][j] == 0
    ]

    while queue:
        x, y, path, count = queue.pop(0)
        if len(path) > k:
            continue
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if (
                0 <= nx < m
                and 0 <= ny < len(grid[0])
                and grid[nx][ny] != -1
                and (nx, ny) not in [(i, j) for i, j, cnt in count]
            ):
                new_count = {k: v + 1 for k, v in count.items()}
                new_count[(nx, ny)] = 1
                queue.append((nx, ny, path + [grid[nx][ny]], new_count))

    return next((path for path, _ in queue if len(path) == k), None)