def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    path = []

    def dfs(i, j, curr_path):
        nonlocal path
        if len(curr_path) == k:
            path = curr_path[:]
            return True

        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                if dfs(ni, nj, curr_path + [grid[ni][nj]]):
                    return True
                visited[ni][nj] = False

        return False

    for i in range(n):
        for j in range(n):
            visited[i][j] = True
            if dfs(i, j, [grid[i][j]]):
                return path