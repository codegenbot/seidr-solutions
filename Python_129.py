def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) > k:
            return None
        if len(path) == k:
            return path

        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < N and 0 <= y < N and grid[x][y] not in path:
                new_path = dfs(x, y, path + [grid[x][y]])
                if new_path:
                    return new_path

    for i in range(N):
        for j in range(N):
            res = dfs(i, j, [grid[i][j]])
            if res:
                return res