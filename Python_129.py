```
def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]
    
    def dfs(i, j, path):
        if len(path) == k:
            return path
        res = float('inf')
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] > m[i][j]:
                m[ni][nj] += 1
                res = min(res, dfs(ni, nj, path + [grid[ni][nj]]))
                m[ni][nj] -= 1
        return res
    
    ans = float('inf')
    for i in range(n):
        for j in range(n):
            m[i][j] += 1
            temp = dfs(i, j, [grid[i][j]])
            if len(temp) == k and temp < ans:
                ans = temp
            m[i][j] -= 1
    return ans