def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    result = []

    def dfs(i, j, path):
        nonlocal result
        if len(path) == k:
            result = sorted(path)
            return True

        visited[i][j] = True
        for d in directions:
            new_i, new_j = i + d[0], j + d[1]
            if 0 <= new_i < n and 0 <= new_j < n and not visited[new_i][new_j]:
                dfs(new_i, new_j, path + [grid[i][j]])
        visited[i][j] = False
        return False

    for i in range(n):
        for j in range(n):
            if dfs(i, j, [grid[i][j]]):
                return result