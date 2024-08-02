def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(i, j, visited, path, steps):
        if steps == k:
            return path

        visited.add((i, j))
        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                new_path = dfs(x, y, visited.copy(), path + [grid[x][y]], steps + 1)
                if new_path:
                    return new_path

    for i in range(n):
        for j in range(n):
            result = dfs(i, j, set(), [grid[i][j]], 1)
            if result:
                return result