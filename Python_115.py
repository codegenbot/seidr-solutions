def max_fill(grid, capacity):
    m = len(grid)
    n = len(grid[0])
    visited = [[False for _ in range(n)] for _ in range(m)]
    count = 0

    def dfs(i, j):
        if i == m or j == n:
            return
        if not visited[i][j] and grid[i][j] == 1:
            visited[i][j] = True
            dfs(i + 1, j)
            dfs(i - 1, j)
            dfs(i, j + 1)
            dfs(i, j - 1)
    
    for i in range(m):
        for j in range(n):
            if not visited[i][j] and grid[i][j] == 1:
                dfs(i, j)
                count += 1
    
    return count