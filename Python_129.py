```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    path = []

    def dfs(i, j, current_path):
        nonlocal path
        if len(current_path) == k:
            if not path or sum(current_path) < sum(path):
                path = current_path[:]
            return

        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                dfs(ni, nj, current_path + [grid[ni][nj]])
                visited[ni][nj] = False

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                visited[i][j] = True
                dfs(i, j, [grid[i][j]])
                visited[i][j] = False

    return path