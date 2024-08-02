```
def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False]*n for _ in range(n)]
    
    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        min_path = path[:]
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i+x, j+y
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[ni][nj]])
                if len(new_path) > len(min_path):
                    min_path = new_path
        visited[i][j] = False
        return min_path
    
    for i in range(n):
        for j in range(n):
            res = max(res, dfs(i, j, [grid[i][j]]))
    
    return res