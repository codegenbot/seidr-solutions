```
def minPath(grid, k):
    N = len(grid)
    res = []
    
    def dfs(x, y, path):
        if len(path) == k:
            return [path]
        
        paths = []
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                new_path = path + [grid[nx][ny]]
                paths.extend(dfs(nx, ny, new_path))
        
        return paths
    
    queue = [(0, 0)]
    
    while queue:
        x, y = queue.pop(0)
        paths = dfs(x, y, [])
        for path in paths:
            res.append(path)
    
    return [path[0] for path in res if len(path) == k]