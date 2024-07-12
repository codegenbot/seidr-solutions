def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, p):
        if len(p) == k:
            return {p}
        if (i, j) in visited:
            return set()
        visited.add((i, j))
        ress = set()
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                ress.update(dfs(ni, nj, p + [grid[ni][nj]]))
        return ress

    visited = set()
    for i, j in [(n // 2, n // 2)]:
        for path in dfs(i, j, []):
            if len(path) == k and len(path) == len(set(path)):
                return sorted(list(path))
    return []