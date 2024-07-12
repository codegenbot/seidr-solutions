```
def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False]*n for _ in range(n)]
    
    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        res.append(grid[i][j])
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        for di, dj in directions:
            ni, nj = i+di, j+dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                p = dfs(ni, nj, path+[grid[i][j]])
                if p:
                    return p
        res.pop()
        return []
    
    for i in range(n):
        for j in range(n):
            p = dfs(i, j, [])
            if p and len(p) == k:
                return p
    return []