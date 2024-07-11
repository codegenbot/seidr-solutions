```python
def minPath(grid, k):
    n = len(grid)
    
    def dfs(i, j, path):
        if len(path) == k:
            return [path]
        res = []
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and grid[x][y] not in path:
                res.extend(dfs(x, y, path + [grid[x][y]]))
        return res
        
    res = []
    for i in range(n):
        for j in range(n):
            res.extend(dfs(i, j, [grid[i][j]]))

    paths = set()
    for p in res:
        if len(p) == k:
            paths.add(tuple(sorted(p)))
            
    return [list(path) for path in paths]