```
def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    paths = []

    def dfs(i, j, curr_path):
        nonlocal paths
        if len(curr_path) == k:
            paths.append(curr_path[:])
            return

        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                dfs(ni, nj, curr_path + [grid[ni][nj]])
                visited[ni][nj] = False

    for i in range(n):
        for j in range(n):
            visited[i][j] = True
            dfs(i, j, [grid[i][j]])

    return paths