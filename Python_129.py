def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        nonlocal minimum_path
        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < N and 0 <= y < N:
                new_path = dfs(x, y, path + [grid[x][y]])
                if new_path and (not minimum_path or new_path < minimum_path):
                    minimum_path = new_path

    minimum_path = None
    for i in range(N):
        for j in range(N):
            dfs(i, j, [grid[i][j]])

    return minimum_path