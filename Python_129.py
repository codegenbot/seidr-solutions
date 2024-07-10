```
def minPath(grid, k):
    N = len(grid)
    res = []

    def dfs(x, y, path, dist):
        if len(path) < k:
            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nx, ny = x + dx, y + dy
                if 0 <= nx < N and 0 <= ny < N and grid[nx][ny] not in path:
                    new_path = path + [grid[nx][ny]]
                    dfs(nx, ny, new_path, dist + abs(dx) + abs(dy))

        else:
            res.append((path, dist))
            return True

    queue = [(0, 0, [grid[0][0]], 0)]

    while queue:
        x, y, path, dist = queue.pop(0)

        dfs(x, y, path, dist)

    return res