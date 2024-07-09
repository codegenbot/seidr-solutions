def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    path = []

    def dfs(i, j, path_length):
        nonlocal path
        if len(path) == k:
            return True

        if len(path) > 0 and grid[i][j] <= min(path):
            return False

        if visited[i][j]:
            return False

        visited[i][j] = True
        path.append(grid[i][j])

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < m:
                if dfs(ni, nj, path_length + 1):
                    return True

        visited[i][j] = False
        path.pop()

        return False

    for i in range(n):
        for j in range(m):
            if dfs(i, j, 0):
                return path