def minPath(grid, k):
    n = len(grid)
    m = [[0] * n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            m[i][j] = (i * n) + j + 1
    visited = set()

    def dfs(i, j, path):
        if len(path) == k:
            return path
        if (i, j) in visited:
            return None
        visited.add((i, j))
        res = None
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            new_i, new_j = i + x, j + y
            if 0 <= new_i < n and 0 <= new_j < n:
                new_path = path + [m[new_i][new_j]]
                res = (
                    min(res, dfs(new_i, new_j, new_path))
                    if res
                    else dfs(new_i, new_j, new_path)
                )
        visited.remove((i, j))
        return res

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [m[i][j]])
            if path:
                return path