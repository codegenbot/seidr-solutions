def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited[i][j] = True
        next_cells = []
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                next_cells.append((grid[ni][nj], ni, nj))
        next_cells.sort()

        for val, ni, nj in next_cells:
            res = dfs(ni, nj, path + [val])
            if res:
                return res

        visited[i][j] = False

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [grid[i][j]])
            if res:
                return res