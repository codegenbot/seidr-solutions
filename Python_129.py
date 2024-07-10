def minPath(grid, k):
    n = len(grid)
    visited = set()
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited.add((i, j))
        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                new_path = dfs(x, y, path + [grid[x][y]])
                if new_path:
                    return new_path

        visited.remove((i, j))

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path