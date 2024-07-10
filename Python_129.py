```
def minPathSum(grid, k):
    N = len(grid)
    directions = [(0, 1), (1, 0)]
    memo = {}

    def dfs(i, j, path_len):
        if (i, j, path_len) in memo:
            return memo[(i, j, path_len)]
        
        if path_len == k:
            return grid[i][j]

        res = float("inf")
        for dx, dy in directions:
            ni, nj = i + dx, j + dy
            if 0 <= ni < N and 0 <= nj < N:
                res = min(res, dfs(ni, nj, path_len + 1) + grid[i][j])
        
        memo[(i, j, path_len)] = res
        return res

    return min(dfs(i, j, 0) for i in range(N) for j in range(N))

grid = [[1,2],[3,4]]
k = 2
print(minPathSum(grid, k))