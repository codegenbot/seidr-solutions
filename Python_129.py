def minPath(grid, k):
    n = len(grid)
    res = float("inf")

    def dfs(i, j, path_length=0, current_path=[]):
        nonlocal res
        if len(current_path) >= k:
            res = (
                min(res, tuple(sorted(current_path)))
                if res > tuple(sorted(current_path))
                else res
            )

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in current_path:
                dfs(ni, nj, path_length + 1, current_path + [grid[ni][nj]])

    for i in range(n):
        for j in range(n):
            dfs(i, j)

    return sorted(res)[0] if res != float("inf") else None