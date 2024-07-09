def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    
    visited = set()
    path = []
    
    def dfs(x, y, p):
        nonlocal visited, path
        if len(p) == k:
            return p
        
        if (x, y) in visited or m[x][y] not in p:
            return None
        
        visited.add((x, y))
        
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n:
                p.append(m[nx][ny])
                res = dfs(nx, ny, p[:])
                if res is not None:
                    return res
                p.pop()
        
        visited.remove((x, y))
        return None
    
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [m[i][j]])
            if path is not None:
                return sorted(path)