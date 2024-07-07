```
def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    res = []
    visited = [[False]*m for _ in range(n)]
    
    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        min_val = float('inf')
        for x, y in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
            if 0 <= x < n and 0 <= y < m and not visited[x][y]:
                val = grid[x][y]
                path.append(val)
                res_val = dfs(x, y, path)
                path.pop()
                if len(res_val) == k and val < min_val:
                    min_val = val
                    res = res_val
        visited[i][j] = False
        return res
    
    for i in range(n):
        for j in range(m):
            res = dfs(i, j, [])
            if len(res) == k:
                return res