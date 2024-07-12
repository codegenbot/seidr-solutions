def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path):
        nonlocal k
        if len(path) == k:
            return path
        min_path = None
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
                new_path = dfs(ni, nj, path + [m[ni][nj]])
                if min_path is None or len(new_path) < len(min_path):
                    min_path = new_path
        return min_path

    min_path = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [])
            if min_path is None or len(path) < len(min_path):
                min_path = path
    return min_path


grid = [[1, 2], [3, 4]]
k = 2
print(minPath(grid, k))