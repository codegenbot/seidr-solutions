def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    visited = set()
    path = []

    def dfs(i, j, length):
        if length == k:
            return [m[i][j]]
        if (i, j) in visited or m[i][j] <= 0:
            return []

        visited.add((i, j))
        res = []
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 1 <= x < n and 1 <= y < n:
                new_path = dfs(x, y, length + 1)
                if new_path:
                    res.append([m[i][j]] + new_path)
        visited.remove((i, j))
        return min(res, key=lambda x: x) if res else []

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, 0)
            if path:
                return path