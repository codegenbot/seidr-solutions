def minPathSum(grid):
    n = len(grid)
    for i in range(n):
        for j in range(len(grid[i])):
            if i == 0:
                grid[i][j] += j
            elif j == 0:
                grid[i][j] += grid[i - 1][j]
            else:
                grid[i][j] += min(grid[i - 1][j], grid[i][j - 1])
    return grid[-1][-1]


grid = [[1, 3, 1], [1, 5, 1], [4, 2, 1]]
print(minPathSum(grid))