def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)
    visited = set()
    min_path = []

    def dfs(i, j, path):
        if len(path) == 2*k:
            nonlocal min_path
            min_path = path[:]
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

    return min_path