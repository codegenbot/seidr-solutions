```
def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    res = []
    
    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            return True
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i+x, j+y
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                visited[ni][nj] = True
                path.append(grid[ni][nj])
                if dfs(ni, nj, path):
                    return True
                visited[ni][nj] = False
                path.pop()
        return False
    
    for i in range(N):
        for j in range(N):
            visited[i][j] = True
            if dfs(i, j, []):
                res = sorted(path)
                break
            visited[i][j] = False
    return res