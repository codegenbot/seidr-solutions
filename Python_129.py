```
def shortestPaths(grid, k):
    if len(grid) == 0 or k <= 0:
        return []

    result = []
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            dfs(i, j, [], set(), k, [i * len(grid) + j], result)

    if result: 
       return min(result)
    else: 
       return []