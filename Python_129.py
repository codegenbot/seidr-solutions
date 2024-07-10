def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            res = sorted(path)
            return True

        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and (x, y) not in path:
                path.append((x, y))
                dfs(x, y, path)
                path.pop()

    for i in range(n):
        for j in range(n):
            if (i, j) not in res and len(res) < k:
                dfs(i, j, [(i, j)])

    return sorted([grid[x][y] for x, y in res])