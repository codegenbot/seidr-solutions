def minPath(grid, k):
    n = len(grid)
    visited = set()
    path = []

    def dfs(i, j, p):
        if len(p) == k:
            nonlocal path
            path = sorted(p)
            return False
        if (i, j) in visited:
            return True
        visited.add((i, j))
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                dfs(ni, nj, p + [grid[ni][nj]])
        return True

    for i, j in [(i, j) for i in range(n) for j in range(n)]:
        if dfs(i, j, []):
            return path
    return []