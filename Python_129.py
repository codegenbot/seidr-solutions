def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        best_path = None
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = path + [m[ni][nj]]
                new_visited = visited | {(ni, nj)}
                p = dfs(ni, nj, new_path, new_visited)
                if p is None or p < best_path:
                    best_path = p
        return best_path

    min_path = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [m[i][j]], {(i, j)})
            if path is None or (min_path is None or path < min_path):
                min_path = path
    return min_path