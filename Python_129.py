def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    visited = set()
    result = []

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal result
            if not result or path < result:
                result = path[:]
            return

        visited.add((i, j))
        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                dfs(x, y, path + [grid[x][y]])
        visited.remove((i, j))

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])

    return result