def shortest_path_to_goal(grid):
    m = len(grid)
    n = [[i * m + j for j in range(m)] for i in range(m)]
    memo = {}
    
    def dfs(i, j, path):
        if (i, j) in memo:
            return memo[(i, j)]
        
        if (m-1, n-1) == (i, j):
            return path
        
        res = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < m and 0 <= nj < n and (ni, nj) not in memo:
                res.append(dfs(ni, nj, path + [n[ni][nj]]))
        
        memo[(i, j)] = min(res, key=len) if res else []
        return memo[(i, j)]
    
    return dfs(0, 0, [])