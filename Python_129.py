def minPath(grid, k):
    n = len(grid)

    def dfs(i, j, visited, path):
        if len(path) == k:
            return path
        visited.add((i, j))
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, visited.copy(), path + [grid[ni][nj]])
                if new_path:
                    return new_path

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, set(), [grid[i][j]])
            if path:
                return path