def minPath(grid):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                path = [grid[i][j]]
                dfs(i, j, 0, grid, path, res)
    return sorted([list(x) for x in set(tuple(x) for x in res)])