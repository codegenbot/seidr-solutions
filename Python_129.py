def minPath(grid, k):
    N = len(grid)

    def dfs(i, j, path):
        if len(path) == k:
            return list(path)
        path.append((i, j))
        neighbors = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        neighbors = [
            (x, y)
            for x, y in neighbors
            if 0 <= x < N and 0 <= y < N and (x, y) not in path
        ]
        neighbors.sort(key=lambda x: (grid[x[0]][x[1]], x))
        for x, y in neighbors:
            res = dfs(x, y, list(path))
            if res:
                return [grid[i][j]] + res
        return []

    for i in range(N):
        for j in range(N):
            res = dfs(i, j, [])
            if res:
                return [grid[i][j]] + res