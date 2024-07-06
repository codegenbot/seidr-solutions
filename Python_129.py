def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    path = []

    def dfs(i, j, k, cur_path):
        if not 0 <= i < n or not 0 <= j < m:
            return
        if visited[i][j]:
            return
        visited[i][j] = True
        cur_path.append(grid[i][j])
        if len(cur_path) == k:
            return cur_path
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            dfs(x, y, k, cur_path)

    for i in range(n):
        for j in range(m):
            dfs(i, j, k, path)

    return path