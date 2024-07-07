def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]
    for i in range(n):
        for j in range(n):
            grid[i][j] -= 1
    visited = set()

    def dfs(i, j, path):
        if len(path) == k:
            return path
        if (i, j) in visited:
            return None
        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            new_i, new_j = i + x, j + y
            if 0 <= new_i < n and 0 <= new_j < n:
                new_path = dfs(new_i, new_j, path + [grid[new_i][new_j]])
                if new_path is not None:
                    return new_path
        visited.remove((i, j))
        return None

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [])
            if res is not None:
                return res