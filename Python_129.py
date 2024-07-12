```
def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    path = []
    def dfs(i, j, current_path):
        nonlocal path
        if len(current_path) == k:
            if not path or current_path < path:
                path = current_path
            return
        visited[i][j] = True
        for x, y in [(i-1,j), (i+1,j), (i,j-1), (i,j+1)]:
            if 0 <= x < N and 0 <= y < N and not visited[x][y]:
                dfs(x, y, current_path + [grid[x][y]])
        visited[i][j] = False

    for i in range(N):
        for j in range(N):
            dfs(i, j, [])
    return path