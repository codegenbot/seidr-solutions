def minPath(grid, k):
    n = len(grid)
    for i in range(n):
        grid[i] = list(map(str, grid[i]))

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        res = []
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = i + dx, j + dy
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                visited.add((x, y))
                res.extend(dfs(x, y, path + [grid[x][y]], visited))
                visited.remove((x, y))
        return min(res)

    return dfs(0, 0, [], set())