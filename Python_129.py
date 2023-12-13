def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]
    path = []

    def dfs(i, j, count):
        if count == k:
            return True
        if i < 0 or i >= n or j < 0 or j >= m or visited[i][j]:
            return False
        
        path.append(grid[i][j])
        visited[i][j] = True

        if dfs(i + 1, j, count + 1):
            return True
        if dfs(i - 1, j, count + 1):
            return True
        if dfs(i, j + 1, count + 1):
            return True
        if dfs(i, j - 1, count + 1):
            return True

        path.pop()
        visited[i][j] = False
        return False

    for i in range(n):
        for j in range(m):
            if dfs(i, j, 0):
                return path

    return path