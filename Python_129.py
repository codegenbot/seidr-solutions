def minPath(grid, k):
    n = len(grid)
    res = []
    min_len = float("inf")
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                path = [grid[i][j]]
                dfs(grid, i, j, k - 1, path, res, min_len)
    return [path[0]] * k


def dfs(grid, x, y, k, path, res, min_len):
    n = len(grid)
    if k == 0:
        res.append(path[:])
        return
    for dx in [-1, 0, 1]:
        for dy in [-1, 0, 1]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in path:
                new_path = list(path)
                new_path.append((nx, ny))
                dfs(grid, nx, ny, k - 1, new_path, res, min_len)
    if len(res):
        min_len = min(len(path) for path in res)
        return