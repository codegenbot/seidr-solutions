def minPath(grid, k):
    N = len(grid)
    res = []
    
    def dfs(x, y, path):
        if len(path) == k:
            return [path[:]]
        
        paths = []
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and grid[nx][ny] not in path:
                new_path = path + [grid[nx][ny]]
                paths.extend(dfs(nx, ny, new_path))
        return paths
    
    res = dfs(0, 0, [])
    
    return [p for p in res if len(set(p)) == k and sum(x < y for x, y in zip(p, p[1:])) <= k]