def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(x, y, path):
        if len(path) == k:
            return path

        result = []
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in path:
                result.append(dfs(nx, ny, path + [(nx, ny)]))

        return min(result)

    start = min((grid[i][j], i, j) for i in range(n) for j in range(n))[1:]
    return [grid[start[0]][start[1]]] + dfs(*start, [start])