def minPath(grid, k):
    N = len(grid)
    res = []
    
    def dfs(x, y, path, count):
        if count == k:
            res.append(path[:]) 
            return True
        
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and grid[nx][ny] not in path:
                visited[nx][ny] = True
                if dfs(nx, ny, path + [grid[nx][ny]], count + 1):
                    return True
                visited[nx][ny] = False
        
        return count == k
    
    visited = [[False for _ in range(N)] for _ in range(N)]
    total_sum = sum(sum(row) for row in grid)
    
    if k > total_sum:
        return []
    
    queue = [(0, 0, [grid[0][0]], 1)]
    
    while queue:
        x, y, path, count = queue.pop(0)
        
        if dfs(x, y, path, count):
            return res
    
    return []