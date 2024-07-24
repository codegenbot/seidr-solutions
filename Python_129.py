def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    def dfs(i, j, path, length):
        if length == k:
            return path
        visited.add((i, j))
        min_path = path[:]
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                new_path = dfs(x, y, path + [m[x][y]], length + 1)
                if new_path and (not min_path or new_path < min_path):
                    min_path = new_path
        return min_path

    visited = set()
    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [], 0)
            if res:
                return res