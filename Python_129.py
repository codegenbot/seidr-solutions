```
def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    path = []
    
    def dfs(i, j, curr_path):
        nonlocal path
        if len(curr_path) == k:
            path = curr_path[:]
            return True
        
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i+di, j+dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                visited[ni][nj] = True
                curr_path.append(grid[ni][nj])
                if dfs(ni, nj, curr_path):
                    return True
                curr_path.pop()
                visited[ni][nj] = False
        
        return False
    
    for i in range(N):
        for j in range(N):
            visited[i][j] = True
            dfs(i, j, [grid[i][j]])
            visited[i][j] = False
    
    return path