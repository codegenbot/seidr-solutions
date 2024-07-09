def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    queue = [(0, 0, [grid[0][0]])]
    res = []

    while queue:
        x, y, path = queue.pop(0)

        if grid[x][y] == 3 and len(path) == k + 1:
            if not res or len(path) > len(res):
                res = list(path[:-1])
            continue

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if (
                0 <= nx < N
                and 0 <= ny < N
                and not visited[nx][ny]
                and ((dx, dy) in [(0, 0), (-1, 0), (1, 0), (0, -1)] or (dx, dy) == (0, 1))
                and grid[nx][ny] != "X"
            ):
                visited[nx][ny] = True
                queue.append((nx, ny, path + [grid[nx][ny]]))

    return res