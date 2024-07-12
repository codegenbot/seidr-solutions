```
def minPath(grid, k):
    n = len(grid)
    visited = set()
    paths = []

    def dfs(i, j, p, s):
        if len(p) == k:
            paths.append((s, p))
            return
        if (i, j) in visited:
            return
        visited.add((i, j))
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                dfs(ni, nj, p + [grid[ni][nj]], s + grid[ni][nj])

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            dfs(i, j, [], 0)
    return sorted(paths)[0][1] if paths else []