def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]

    def dfs(x, y, path, count):
        if len(path) > k:
            return
        if all(count.get(i, 0) <= j for i, j in zip(path, grid[0])):
            res.append(path)
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                queue.append(
                    (
                        nx,
                        ny,
                        path + [grid[nx][ny]],
                        {i: count.get(i, 0) + 1 for i in count},
                    )
                )
                visited[nx][ny] = True

    queue = [(0, 0, [grid[0][0]], {grid[0][0]: 1})]

    while queue:
        x, y, path, count = queue.pop(0)
        dfs(x, y, path, count)

    return res