def minPath(grid, k):
    def dfs(i, j, target, visited, path, result):
        if not (0 <= i < len(grid) and 0 <= j < len(grid[0])) or grid[i][j] != target or visited[i][j]:
            return
        visited[i][j] = True
        path.append(grid[i][j])
        if len(path) == k:
            result.append(path[:])
        dfs(i - 1, j, target, visited, path, result)
        dfs(i + 1, j, target, visited, path, result)
        dfs(i, j - 1, target, visited, path, result)
        dfs(i, j + 1, target, visited, path, result)
        visited[i][j] = False
        path.pop()
    
    result = []
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            visited = [[False] * len(grid[0]) for _ in range(len(grid))]
            path = []
            dfs(i, j, grid[i][j], visited, path, result)
    return min(result)