def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False]*n for _ in range(n)]
    
    def dfs(x, y, path):
        if len(path) == k:
            return path
        visited[x][y] = True
        res.append((x, y))
        min_val = 1
        for dx, dy in [(-1,0), (1,0), (0,-1), (0,1)]:
            nx, ny = x+dx, y+dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                if grid[nx][ny] < min_val:
                    min_val = grid[nx][ny]
        for dx, dy in [(-1,0), (1,0), (0,-1), (0,1)]:
            nx, ny = x+dx, y+dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                if grid[nx][ny] == min_val:
                    path.append(grid[nx][ny])
                    new_path = dfs(nx, ny, path)
                    if new_path:
                        return new_path
                    path.pop()
        visited[x][y] = False
        res.pop()
    
    for i in range(n):
        for j in range(n):
            path = [grid[i][j]]
            new_path = dfs(i, j, path)
            if new_path:
                return new_path
    return []