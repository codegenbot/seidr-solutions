def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    moves = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited[i][j] = True
        next_moves = [(i + x, j + y) for x, y in moves if 0 <= i + x < n and 0 <= j + y < n]
        next_moves.sort(key=lambda x: (grid[x[0]][x[1]], x))

        for ni, nj in next_moves:
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                res = dfs(ni, nj, path + [grid[ni][nj]])
                if res:
                    return res

        visited[i][j] = False

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [grid[i][j]])
            if res:
                return res