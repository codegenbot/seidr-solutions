def minPath(grid, k):
    n = len(grid)
    visited = set()
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited.add((i, j))
        next_paths = []
        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                next_paths.append((grid[x][y], x, y))

        next_paths.sort()
        for val, x, y in next_paths:
            res = dfs(x, y, path + [val])
            if res:
                return res

        visited.remove((i, j))

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [grid[i][j]])
            if res:
                return res