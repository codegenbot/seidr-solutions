def minPath(grid, k):
    n = len(grid)
    m = [(i, j) for i in range(n) for j in range(n)]
    visited = set()
    path = []

    def dfs(i, j, p):
        if len(p) == k:
            return [p]
        if (i, j) in visited:
            return []
        visited.add((i, j))
        res = []
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                res += dfs(ni, nj, p + [grid[ni][nj]])
        return res

    for i, j in m:
        for p in dfs(i, j, []):
            if len(p) == k:
                return sorted(p)
    return []