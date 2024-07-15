def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in visited:
                new_path = path + [m[ni][nj]]
                new_visited = set(visited) | {m[ni][nj]}
                res = dfs(ni, nj, new_path, new_visited)
                if res:
                    return res

        return None

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [m[i][j]], {m[i][j]})
            if path:
                return path