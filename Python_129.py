def minPath(grid, k):
    n = len(grid)
    
    def dfs(i, j, path):
        if len(path) == k:
            return path
        min_path = None
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] == 0:
                new_path = dfs(ni, nj, path + [grid[ni][nj]])
                if min_path is None or new_path < min_path:
                    min_path = new_path
        return min_path
    
    min_path = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [])
            if min_path is None or path < min_path:
                min_path = path
    return min_path