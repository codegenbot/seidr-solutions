def minPathCost(grid, k):
    n = len(grid)
    m = [(i, j) for i in range(n) for j in range(n)]
    visited = set()
    path = []

    def dfs(i, j, p, cost):
        if cost == k:
            return [p]
        if (i, j) in visited or cost > k:
            return []
        visited.add((i, j))
        res = []
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = p + [grid[ni][nj]]
                res += dfs(ni, nj, new_path, cost + grid[ni][nj])
        return res

    for i, j in m:
        for p in dfs(i, j, [], 0):
            if len(p) == k:
                return sorted(p)
    return []