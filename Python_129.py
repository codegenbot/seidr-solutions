def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    visited = set()

    def dfs(i, j, path):
        if (i, j) in visited:
            return None
        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                new_path = path + [m[ni][nj]]
                res = dfs(ni, nj, new_path)
                if res is not None:
                    return res
                visited.remove((i, j))
        return path

    min_steps = 0
    for i in range(n):
        for j in range(n):
            min_steps = max(min_steps, m[i][j])

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [m[i][j]])
            if len(res) == k:
                return res
    return []