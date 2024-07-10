def minPath(grid):
    n = len(grid)
    res = []
    visited = [[False for _ in range(n)] for _ in range(n)]
    path_sum = [0]

    def dfs(i, j, path):
        if visited[i][j]:
            return
        visited[i][j] = True
        path.append(grid[i][j])
        min_len = len(path)
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and not visited[x][y]:
                dfs(x, y, path[:])
        path.pop()
        visited[i][j] = False

    dfs(0, 0, [])
    return min(path_sum)