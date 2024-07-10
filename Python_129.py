def minPath(grid, k):
    N = len(grid)
    res = []

    def dfs(i, j, path_len, total_cost, path):
        nonlocal res
        if path_len == k:
            if total_cost <= k * grid[i][j]:
                res.append(path[:])
            return
        if i < 0 or i >= N or j < 0 or j >= N:
            return
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < N and 0 <= nj < N:
                if grid[ni][nj] > grid[i][j]:
                    path.append(grid[ni][nj])
                    dfs(
                        ni,
                        nj,
                        path_len + 1,
                        total_cost + abs(grid[ni][nj] - grid[i][j]),
                        path,
                    )
                    path.pop()

    for i in range(N):
        for j in range(N):
            if grid[i][j] > k:
                return []
            dfs(i, j, 0, 0, [grid[i][j]])
    return res