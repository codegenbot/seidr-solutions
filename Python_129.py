```python
def minPath(grid, k):
    n = len(grid)
    
    def dfs(i, j, path, visited):
        if len(path) == k:
            return [path]
        res = []
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and grid[x][y] not in path and grid[x][y] not in visited:
                res.extend(dfs(x, y, path + [grid[x][y]], set(path + [grid[x][y]])))
        return res
        
    res = []
    for i in range(n):
        for j in range(n):
            res.extend(dfs(i, j, [grid[i][j]], {grid[i][j]}))
            
    return next((p for p in res if len(p) == k), [])