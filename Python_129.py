```
def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]
    
    def dfs(i, j, path):
        if len(path) == k:
            return path
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in path:
                m[ni][nj] += 1
                res = dfs(ni, nj, path + [grid[ni][nj]])
                m[ni][nj] -= 1
                if len(res) > len(path):
                    return res
        return path
    
    ans = float('inf')
    for i in range(n):
        for j in range(n):
            temp = dfs(i, j, [grid[i][j]])
            if len(temp) == k:
                ans = min(ans, temp)
    
    return ans