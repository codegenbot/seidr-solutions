```
def minPath(grid):
    n = len(grid)
    res = float('inf')
    visited = [[False]*n for _ in range(n)]
    
    def dfs(x, y, step, path):
        nonlocal res
        if step > len(path) - 1:
            return
        if step >= len(path) - 1 and step < res:
            res = step
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                visited[nx][ny] = True
                dfs(nx, ny, step+1, path+[grid[nx][ny]])
                visited[nx][ny] = False

    for i in range(n):
        if grid[i][0] == 1:
            dfs(i, 0, 0, [grid[i][0]])
            break
    return res if res != float('inf') else -1