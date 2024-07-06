def minPath(grid, k):
    n = len(grid)
    path = []
    
    def dfs(i, j, visited, current_path):
        nonlocal path
        if len(current_path) == k:
            if not path or sum(current_path) < sum(path):
                path = current_path[:]
            return
        
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in visited:
                dfs(ni, nj, visited | {grid[ni][nj]}, current_path + [grid[ni][nj]])
    
    for i in range(n):
        for j in range(n):
            dfs(i, j, set(), [grid[i][j]])
    
    return path