def minPathSum(grid):
    n = len(grid)
    m = [[0] * n for _ in range(n)]
    min_path_sum = float("inf")

    def dfs(i, j, path_sum):
        nonlocal min_path_sum
        if (i, j) == (n - 1, n - 1):
            min_path_sum = min(min_path_sum, path_sum + grid[i][j])
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                dfs(ni, nj, path_sum + grid[i][j])

    for i in range(n):
        for j in range(n):
            dfs(i, j, 0)
    return min_path_sum