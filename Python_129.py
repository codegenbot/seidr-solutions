def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    res = []

    def dfs(i, j, path, count):
        nonlocal res
        if count == k:
            res = sorted(path)
            return
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 1 <= ni < n and 1 <= nj < n:
                if (ni, nj) not in set([(x, y) for x, y in path]):
                    dfs(ni, nj, path + [(grid[i][j], i, j)], count + 1)

    for i in range(n):
        for j in range(n):
            dfs(i, j, [], 0)
            if res:
                return sorted(res[0])
    return []