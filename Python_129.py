def minPath(grid, k):
    n = len(grid)
    visited = set()
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited.add((i, j))
        next_cells = [(i + di, j + dj) for di, dj in directions]
        next_cells.sort(key=lambda x: (grid[x[0]][x[1]], x))

        for ni, nj in next_cells:
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [grid[ni][nj]])
                if new_path:
                    return new_path

        visited.remove((i, j))

    for i in range(n):
        for j in range(n):
            result = dfs(i, j, [grid[i][j]])
            if result:
                return result