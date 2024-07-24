def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    
    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited.add((i, j))
        res = []
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited and m[ni][nj] > m[i][j]:
                res.append(dfs(ni, nj, path + [m[ni][nj]]))
        return min(res, key=lambda x: x if x else []) or []
    
    visited = set()
    return dfs(0, 0, [grid[0][0]])