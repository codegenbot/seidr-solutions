```
def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    min_path = []
    
    def dfs(i, j, path):
        nonlocal min_path
        if len(path) == k:
            return path
        visited[i][j] = True
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[ni][nj]])
                if len(min_path) == 0 or new_path < min_path:
                    min_path = new_path
        visited[i][j] = False
        return min_path
    
    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [grid[i][j]])
            if len(min_path) == 0 or path < min_path:
                min_path = path
    return min_path