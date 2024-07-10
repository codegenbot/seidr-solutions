def minPathSum(grid): 
    n = len(grid)
    m = [[0] * n for _ in range(n)]

    def dfs(i, j, path_sum, visited):
        nonlocal min_path_sum 
        if (i, j) == (n - 1, n - 1):
            nonlocal min_path_sum 
            if min_path_sum is None or path_sum + grid[i][j] < min_path_sum:
                min_path_sum = path_sum + grid[i][j]
        visited.add((i, j))
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                dfs(ni, nj, path_sum + grid[i][j], visited)
        return

    min_path_sum = None 
    for i in range(n):
        for j in range(n):
            dfs(i, j, grid[i][j], set())
    return min_path_sum