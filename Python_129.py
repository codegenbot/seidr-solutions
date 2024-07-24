def minPath(grid, k):
    N = len(grid)
    visited = [[False for _ in range(N)] for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    result = []
    
    def dfs(i, j, path):
        nonlocal result
        if len(path) == k:
            result = sorted(path)
            return True
        visited[i][j] = True
        for d in directions:
            ni, nj = i + d[0], j + d[1]
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                dfs(ni, nj, path + [grid[ni][nj]])
        visited[i][j] = False
        return False
    
    for i in range(N):
        for j in range(N):
            if dfs(i, j, [grid[i][j]]):
                return result