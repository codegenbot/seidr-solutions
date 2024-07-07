def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    
    def dfs(x, y, path, visited):
        if len(path) == k:
            return [path]
        
        visited.add((x, y))
        res = []
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < m and (nx, ny) not in visited:
                for p in dfs(nx, ny, path + [grid[nx][ny]], visited.copy()):
                    res.append(p)
        return res
    
    res = []
    for i in range(n):
        for j in range(m):
            if len(res) == 0 or grid[i][j] < res[-1]:
                for p in dfs(i, j, [grid[i][j]], set()):
                    res = p
                    break
    return res