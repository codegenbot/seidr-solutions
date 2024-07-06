def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n+1)] for i in range(1, n+1)]
    visited = set()
    path = []
    
    def dfs(i, j):
        if (i, j) in visited:
            return
        visited.add((i, j))
        path.append(m[i][j])
        if len(path) == k:
            return
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                dfs(ni, nj)
        path.pop()
    
    for i in range(n):
        for j in range(n):
            dfs(i, j)
    return sorted(path)