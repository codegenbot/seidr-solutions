def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]
    min_len = float('inf')
    min_path = None

    def dfs(i, j, path, len_path):
        nonlocal min_len, min_path
        if len_path == k:
            if len_path < min_len:
                min_len = len_path
                min_path = path
            return
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] == m[i][j] + 1:
                dfs(ni, nj, path + [grid[ni][nj]], len_path + 1)

    for i in range(n):
        for j in range(n):
            m[i][j] = grid[i][j]

    dfs(0, 0, [grid[0][0]], 1)
    return min_path