def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]
    for i in range(n):
        for j in range(n):
            m[i][j] = grid[i][j]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return [path]

        paths = []
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in visited:
                new_path = path + [m[ni][nj]]
                new_visited = set(visited).union({new_path[-1]})
                paths.extend(dfs(ni, nj, new_path, new_visited))

        return paths

    min_path = []
    for i in range(n):
        for j in range(n):
            paths = dfs(i, j, [m[i][j]], {m[i][j]})
            if not min_path or paths < min_path:
                min_path = paths[0]

    return min_path