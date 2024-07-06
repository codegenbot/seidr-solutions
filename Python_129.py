def findMinPath(grid):
    n = len(grid)
    res = []
    min_length = float("inf")

    def dfs(i, j, k, path, length, res):
        nonlocal min_length
        if k == 0:
            if length < min_length:
                min_length = length
                res.clear()
                res.append(path[:])
            return
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
                temp = grid[ni][nj]
                grid[ni][nj], path.append(temp)
                dfs(ni, nj, k - 1, path, length + 1, res)
                grid[ni][nj] = temp

    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                dfs(i, j, n * n, [grid[i][j]], 0, res)
    return res[min_length:]