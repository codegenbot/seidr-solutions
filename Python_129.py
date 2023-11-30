def minPath(grid, k):
    def backtrack(i, j, path, remain):
        if remain < 0:
            return []
        if remain == 0:
            return path
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < len(grid) and 0 <= nj < len(grid[0]) and grid[ni][nj] != -1:
                grid[i][j] = -1
                new_path = backtrack(ni, nj, path + [(ni, nj)], remain - 1)
                grid[i][j] = 0
                if new_path:
                    return new_path
        return []

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] != -1:
                path = backtrack(i, j, [(i, j)], k - 1)
                if path is not None and len(path) == k - 1:
                    return [grid[x][y] for x, y in path]
    return []