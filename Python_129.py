def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    path = []

    def dfs(i, j, current_path):
        nonlocal path
        if len(current_path) == k:
            path = current_path[:]
            return True

        if (
            i < 0
            or i >= n
            or j < 0
            or j >= n
            or visited[i][j]
            or grid[i][j] in current_path
        ):
            return False

        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if dfs(ni, nj, current_path + [grid[i][j]]):
                return True

        return False

    for i in range(n):
        for j in range(n):
            if dfs(i, j, []):
                return path