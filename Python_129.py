def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []

    def dfs(row, col, steps):
        if steps == k - 1:
            return True

        visited[row][col] = True
        path.append(grid[row][col])

        if row > 0 and not visited[row - 1][col]:
            if dfs(row - 1, col, steps + 1):
                return True

        if row < N - 1 and not visited[row + 1][col]:
            if dfs(row + 1, col, steps + 1):
                return True

        if col > 0 and not visited[row][col - 1]:
            if dfs(row, col - 1, steps + 1):
                return True

        if col < N - 1 and not visited[row][col + 1]:
            if dfs(row, col + 1, steps + 1):
                return True
        
        path.pop()

        return False

    for i in range(N):
        for j in range(N):
            if dfs(i, j, 1) and path:
                return path