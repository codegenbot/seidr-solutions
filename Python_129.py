def minPath(grid, k):
    n = len(grid)
    m = [[cell for cell in row] for row in grid]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        if (i, j) in visited:
            return None
        visited.add((i, j))
        min_path = None
        for x, y in [(0, 1), (1, 0), (-1, 0), (0, -1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [m[ni][nj]], visited.copy())
                if new_path is not None and (min_path is None or new_path < min_path):
                    min_path = new_path
        return min_path

    min_path = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [m[i][j]], set())
            if path is not None and (min_path is None or path < min_path):
                min_path = path
    return min_path