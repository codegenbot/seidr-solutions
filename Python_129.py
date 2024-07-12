def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, p):
        if len(p) == k:
            res.append(sorted(p))
            return
        visited = set()
        visited.add((i, j))
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                dfs(ni, nj, p + [grid[ni][nj]])

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])
    return sorted(set(res))