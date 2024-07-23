def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * len(grid[0]) for _ in range(n)]
    queue = [
        (i, j, [grid[i][j]], {grid[i][j]: 1})
        for i in range(n)
        for j in range(len(grid[0]))
        if grid[i][j] == 0
    ]

    while queue:
        x, y, path, count = queue.pop(0)
        if len(path) == k + 1:
            res = path
            break
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < len(grid[0]) and not visited[nx][ny]:
                queue.append(
                    (
                        nx,
                        ny,
                        path + [grid[nx][ny]],
                        {i: count.get(i, 0) + 1 for i in count},
                    )
                )
                visited[nx][ny] = True

    return res