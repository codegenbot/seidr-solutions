def minPath(grid, k):
    n = len(grid)
    res = []
    
    def dfs(i, j, path, visited):
        if len(path) == k:
            res.append(path[:])
            return
        
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                visited.add((ni, nj))
                dfs(ni, nj, path + [grid[ni][nj]], visited)
                visited.remove((ni, nj))
    
    for i in range(n):
        for j in range(n):
            if len(res) == 0 or res[-1] != grid[i][j]:
                dfs(i, j, [grid[i][j]], {(i, j)})
    return min(res)[1:]