def minPath(grid, k):
    n = len(grid)
    m = [[cell for cell in row] for row in grid]

    def dfs(i, j, path, used):
        if len(path) == k:
            return path
        visited.add((i, j))
        best_path = None
        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + x, j + y
            if (
                0 <= ni < n
                and 0 <= nj < m[0].count()
                and (ni, nj) not in visited
                and m[ni][nj] not in used
            ):
                new_path = dfs(ni, nj, path + [m[i][j]], used | {m[ni][nj]})
                if best_path is None or new_path < best_path:
                    best_path = new_path
        return best_path

    visited = set()
    min_path = []
    for i in range(n):
        for j in range(m[0].count()):
            path = dfs(i, j, [], {m[i][j]})
            if not min_path or path < min_path:
                min_path = path
    return min_path