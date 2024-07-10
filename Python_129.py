```
def minPathSum(grid, k):
    N = len(grid)
    res = float("inf")
    
    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            res = min(res, sum(path))
            return 
        if i < 0 or i >= N or j < 0 or j >= N:
            return 
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + dx, j + dy
            if 0 <= ni < N and 0 <= nj < N:
                dfs(ni, nj, path + [grid[ni][nj]])

    for i in range(N):
        for j in range(N):
            dfs(i, j, [grid[i][j]])
    return res

grid = [[1,2],[3,4]]
k = 2
print(minPathSum(grid, k))