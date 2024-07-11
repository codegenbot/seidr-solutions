def minPath(grid, k):
    n = len(grid)
    min_len = float("inf")

    def dfs(i, j, path, path_len):
        nonlocal min_len
        if path_len > k:
            return
        if path_len == k and path_len < min_len:
            min_len = path_len
            return [path]
        paths = []
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and grid[x][y] not in path:
                paths.extend(dfs(x, y, path + [grid[x][y]], path_len + 1))
        return paths

    for i in range(n):
        for j in range(n):
            res = []
            res += dfs(i, j, [grid[i][j]], 1)
            if res:
                return "".join(sorted(res[0]))