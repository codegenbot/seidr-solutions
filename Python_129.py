def minPath(grid, k):
    N = len(grid)

    def get_neighbors(i, j):
        neighbors = []
        if i > 0:
            neighbors.append((i - 1, j))
        if i < N - 1:
            neighbors.append((i + 1, j))
        if j > 0:
            neighbors.append((i, j - 1))
        if j < N - 1:
            neighbors.append((i, j + 1))
        return neighbors

    def dfs(i, j, path):
        if len(path) == k:
            return path

        for ni, nj in get_neighbors(i, j):
            if grid[ni][nj] not in path:
                res = dfs(ni, nj, path + [grid[ni][nj]])
                if res:
                    return res

        return None

    for i in range(N):
        for j in range(N):
            res = dfs(i, j, [grid[i][j]])
            if res:
                return res