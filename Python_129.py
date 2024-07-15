def minPath(grid, k):
    n = len(grid)
    res = []

    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                path = [grid[i][j]]
                dfs(grid, i, j, k - 1, path, res)
                if res:
                    return res

    return []


def dfs(grid, x, y, k, path, res):
    n = len(grid)

    for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
        nx, ny = x + dx, y + dy
        if 0 <= nx < n and 0 <= ny < n:
            val = grid[nx][ny]
            if val not in path:
                path.append(val)
                dfs(grid, nx, ny, k - 1, path, res)
                path.pop()
                if len(path) == k:
                    res.append(sorted(path))