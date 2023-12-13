def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []

    def dfs(i, j, count):
        if count == k:
            return True

        visited[i][j] = True
        path.append(grid[i][j])

        neighbors = [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]
        for ni, nj in neighbors:
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                if dfs(ni, nj, count + 1):
                    return True

        visited[i][j] = False
        path.pop()

        return False

    for i in range(N):
        for j in range(N):
            if dfs(i, j, 1):
                return path