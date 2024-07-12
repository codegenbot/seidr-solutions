def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    res = []
    visited = set()
    
    def dfs(i, j):
        if k == 0:
            return res
        if m[i][j] in visited or [i, j] not in res:
            return []
        
        visited.add(m[i][j])
        for d in directions:
            ni, nj = i + d[0], j + d[1]
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in visited:
                res.append([ni, nj])
                return dfs(ni, nj)
        return []
    
    for i in range(n):
        for j in range(n):
            if m[i][j] not in visited:
                res = [m[i][j]]
                path = dfs(i, j)
                if len(path) == k:
                    return [grid[x][y] for x, y in path]
    return []