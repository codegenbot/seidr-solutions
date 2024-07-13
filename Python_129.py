def shortestPaths(grid, k):
    if not grid or k <= 0:
        return []

    minPath = []
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            visited = [[False] * len(grid[0]) for _ in range(len(grid))]
            path = [i * len(grid) + j]
            dfs(i, j, path, visited, k, index=path[-1], result=[minPath])
    if minPath:
        return min(minPath)
    else:
        return []