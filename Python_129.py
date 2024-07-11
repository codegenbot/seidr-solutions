def minPath(grid, k):
    n = len(grid)
    res = float('inf')
    min_path = []

    def dfs(i, j, path, length):
        nonlocal res, min_path
        if length == k:
            return
        if length < k and len(path) > 0:
            return
        paths = []
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and grid[x][y] not in path:
                paths.extend(dfs(x, y, path + [grid[x][y]], length + 1))
        if len(paths) == 0 or min_paths == 1:
            return
        for p in paths:
            if len(p) < res:
                res = len(p)
                min_path = p

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]], 1)

    return min_path