def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return [path]

        paths = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in path:
                m[ni][nj] += 1
                paths.extend(dfs(ni, nj, path + [grid[ni][nj]]))
                m[ni][nj] -= 1

        return sorted([p for p in paths])

    min_path = []
    for i in range(n):
        for j in range(n):
            if not min_path or grid[i][j] < min_path[-1]:
                min_path = dfs(i, j, [grid[i][j]])

    return min_path[0]