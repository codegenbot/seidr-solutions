def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path, visited):
        if len(path) == k:
            nonlocal res
            if not res or res != list(sorted(path)):
                res = sorted(path)
            return
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                visited.add((x, y))
                path.append(grid[x][y])
                dfs(x, y, path, visited)
                path.pop()
                visited.remove((x, y))

    for i in range(n):
        for j in range(n):
            dfs(i, j, [], set())
    return res