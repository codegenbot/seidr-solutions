def minPath(grid, k):
    n = len(grid)
    memo = {}

    def dfs(i, j, path, cnt):
        if (i, j, tuple(path)) in memo:
            return memo[(i, j, tuple(path))]

        if cnt == k:
            return path

        min_path = None
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                if grid[ni][nj] not in path:
                    new_path = dfs(ni, nj, path + [grid[ni][nj]], cnt + 1)
                    if min_path is None or min_path > new_path:
                        min_path = new_path

        memo[(i, j, tuple(path))] = min_path
        return min_path

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]], 0)
            if path:
                return list(path)

    return []