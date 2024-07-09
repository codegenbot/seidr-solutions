def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < N and 0 <= y < N and (x, y) not in path:
                next_path = dfs(x, y, path + [(x, y)])
                if next_path:
                    return next_path
        return None

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [(i, j)])
            if path:
                return [grid[x][y] for x, y in path]