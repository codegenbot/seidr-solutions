def minPath(grid, k):
    N = len(grid)

    def dfs(i, j, path):
        if len(path) == k:
            return path
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < N and 0 <= nj < N and (ni, nj) not in path:
                new_path = dfs(ni, nj, path + [(ni, nj)])
                if new_path:
                    return new_path

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [(i, j)])
            if path:
                return [grid[i][j] for i, j in path]