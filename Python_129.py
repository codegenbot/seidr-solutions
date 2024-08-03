def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        min_path = None
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] == m[i][j] + 1:
                new_path = dfs(ni, nj, path + [grid[ni][nj]])
                if min_path is None or new_path < min_path:
                    min_path = new_path
        return min_path

    for i in range(n):
        for j in range(n):
            m[i][j] = 0

    for i in range(n):
        for j in range(n):
            m[i][j] = grid[i][j]

    min_path = dfs(0, 0, [grid[0][0]])
    return min_path