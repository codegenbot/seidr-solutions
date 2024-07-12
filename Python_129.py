```
def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False]*n for _ in range(n)]
    
    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        res.append(grid[i][j])
        min_val = grid[i][j]
        for x, y in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
            if 0 <= x < n and 0 <= y < n and not visited[x][y]:
                new_path = dfs(x, y, path + [grid[i][j]])
                if new_path and min(new_path) < min_val:
                    return new_path
        visited[i][j] = False
        res.pop()
        return []
    
    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                path = dfs(i, j, [])
                if path and len(path) == k:
                    return path
    return []