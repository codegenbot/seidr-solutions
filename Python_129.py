```
def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    
    def dfs(i, j, k):
        if k == 0:
            return [grid[i][j]]
        
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                visited[ni][nj] = True
                path_ = dfs(ni, nj, k-1)
                if path_:
                    path.append(grid[i][j])
                    path.extend(path_)
                    return path
        return []
    
    min_path = []
    for i in range(N):
        for j in range(N):
            visited[i][j] = False
            path = []
            path_ = dfs(i, j, k)
            if not min_path or path_ < min_path:
                min_path = path_
    
    return min_path