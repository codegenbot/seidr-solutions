def minPath(grid, k):
    m, n = len(grid), len(grid[0])
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    queue = [
        (i, j, [grid[i][j]]) for i in range(m) for j in range(n) if grid[i][j] == "O"
    ]

    while queue:
        x, y, path = queue.pop(0)
        if len(path) > k + 1:
            continue

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if (
                0 <= nx < m
                and 0 <= ny < n
                and grid[nx][ny] == "O"
                and not [nx, ny] in path
            ):
                queue.append((nx, ny, path + [[nx, ny]]))
                grid[nx][ny] = "-1"

    res = []
    for i in range(m):
        for j in range(n):
            if grid[i][j] == "O":
                res.append([i, j])

    return [i for n in res for i in n], len(res[0])