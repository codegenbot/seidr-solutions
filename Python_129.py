def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    result = []

    def dfs(i, j, path):
        if path == k:
            return True
        
        visited[i][j] = True
        result.append(grid[i][j])

        if i > 0 and not visited[i-1][j] and dfs(i-1, j, path+1):
            return True
        if i < n-1 and not visited[i+1][j] and dfs(i+1, j, path+1):
            return True
        if j > 0 and not visited[i][j-1] and dfs(i, j-1, path+1):
            return True
        if j < n-1 and not visited[i][j+1] and dfs(i, j+1, path+1):
            return True
        
        visited[i][j] = False
        result.pop()
        return False

    for i in range(n):
        for j in range(n):
            if dfs(i, j, 1):
                return result