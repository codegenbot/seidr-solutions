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
        min_val = grid[i][j]
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i+x, j+y
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                p = dfs(ni, nj, path + [grid[i][j]])
                if p:
                    return p
        visited[i][j] = False
        res.pop()
        return []
    
    for i in range(n):
        for j in range(n):
            p = dfs(i, j, [])
            if p:
                return p
    return []