```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    
    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        for di, dj in directions:
            ni, nj = i+di, j+dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path+[grid[ni][nj]])
                if not new_path: return None
                return new_path
        visited[i][j] = False
        return None
    
    min_path = []
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if path and (not min_path or path < min_path):
                min_path = path
    return min_path