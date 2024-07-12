def minPath(grid, k):
    n = len(grid)
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
        return [p for p in res if len(p) == k]

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            for p in dfs(i, j, []):
                return sorted(p)
    return []