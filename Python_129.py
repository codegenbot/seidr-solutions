def minPath(grid, k):
    N = len(grid)
    for i in range(N):
        for j in range(N):
            grid[i][j] -= 1
    visited = set()
    result = []

    def dfs(i, j, path):
        if len(path) == k:
            return path
        if (i, j) in visited:
            return None
        visited.add((i, j))
        res = None
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < N and 0 <= nj < N:
                new_path = path + [grid[ni][nj]]
                res = dfs(ni, nj, new_path)
                if res is not None:
                    return res
        visited.remove((i, j))
        return res

    for i in range(N):
        for j in range(N):
            res = dfs(i, j, [])
            if res is not None:
                return res
    return []