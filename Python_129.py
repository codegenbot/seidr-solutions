def minPath(grid, k):
    n = len(grid)
    memo = {}

    def dfs(i, j, path, visited):
        if (i, j) in visited:
            return
        if (path,) in memo:
            return
        memo[(path,)] = 1
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                dfs(ni, nj, path + [grid[ni][nj]], visited | {(i, j), (ni, nj)})

    for i in range(n):
        for j in range(n):
            if not memo:
                break
    return sorted(memo.keys()[0])