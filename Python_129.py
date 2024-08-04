def minPath(grid, k):
    n = len(grid)
    visited = [[False for _ in range(n)] for _ in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal min_path
            if min_path is None or len(path) < len(min_path):
                min_path = path[:]
            return

        visited[i][j] = True
        neighbors = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        neighbors.sort(key=lambda x: (x[0], x[1]))

        for ni, nj in neighbors:
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                dfs(ni, nj, path + [grid[ni][nj]])

        visited[i][j] = False

    min_path = None
    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])

    return min_path