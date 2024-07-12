def minPath(grid, k):
    n = len(grid)
    result = []
    
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                current_path = [grid[i][j]]
                dfs(grid, i, j, k - 1, k, current_path, result)
                return current_path

def dfs(grid, i, j, left, max_len, path, res):
    n = len(grid)
    if not left:
        res.append(path[:])
        return
    for x, y in [(-1,0), (1,0), (0,-1), (0,1)]:
        ni, nj = i + x, j + y
        if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
            grid[ni][nj], t = grid[i][j], grid[ni][nj]
            dfs(grid, ni, nj, left - 1, max_len, path + [t], res)
            grid[ni][nj] = t