```
def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                path = [grid[i][j]]
                dfs(grid, i, j, k - 1, path, res)
                if res:
                    return res
    return []

def dfs(grid, x, y, k, path, res):
    n = len(grid)
    if k < 0 or not (0 <= x < n and 0 <= y < n and grid[x][y] == 1):
        return
    for dx in range(-1, 2):
        for dy in range(-1, 2):
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in path:
                new_path = list(path)
                new_path.append((nx, ny))
                dfs(grid, nx, ny, k - 1, new_path, res)