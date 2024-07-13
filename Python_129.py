def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        visited.add((i, j))

        min_path = None
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = path + [m[ni][nj]]
                min_path = (
                    min(min_path, dfs(ni, nj, new_path, visited))
                    if min_path
                    else dfs(ni, nj, new_path, visited)
                )
        return min_path

    min_path = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [m[i][j]], set())
            min_path = min(min_path, path) if min_path else path
    return min_path