def minPath(grid, k):
    N = len(grid)
    
    def dfs(x, y, path):
        if len(path) == k:
            return path[:]
        
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and grid[nx][ny] not in path:
                visited[nx][ny] = True
                new_path = path + [grid[nx][ny]]
                min_path = dfs(nx, ny, new_path)
                if min_path:
                    return min_path
        
        return []
    
    visited = [[False for _ in range(N)] for _ in range(N)]
    queue = [(0, 0, [grid[0][0]])]
    
    while queue:
        x, y, path = queue.pop(0)
        
        if len(path) == k:
            return path
    
    return []