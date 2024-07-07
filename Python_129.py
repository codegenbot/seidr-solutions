```
def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False]*n for _ in range(n)]
    dfs(0, 0, grid[0][0], k, [], visited, res)

    return res

def dfs(x, y, val, k, path, visited, res):
    if k == 0:
        res.extend(path)
        return
    visited[x][y] = True
    for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        nx, ny = x+dx, y+dy
        if 0 <= nx < len(grid) and 0 <= ny < len(grid[0]) and not visited[nx][ny]:
            dfs(nx, ny, val, k-1, [val]+path, visited, res)
    visited[x][y] = False