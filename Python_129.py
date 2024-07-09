def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    path = []
    
    def dfs(x, y, curr_path):
        nonlocal path
        if len(curr_path) == k:
            path = sorted(curr_path[:])
            return True
        
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x+dx, y+dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                visited[nx][ny] = True
                dfs(nx, ny, curr_path+[grid[nx][ny]])
                visited[nx][ny] = False
    
    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                visited[i][j] = True
                dfs(i, j, [grid[i][j]])
                visited[i][j] = False
    
    return path