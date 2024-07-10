def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    visited = set()
    path = []

    def dfs(i, j, cnt):
        if cnt == k:
            return
        if (i, j) in visited:
            return
        visited.add((i, j))
        path.append(m[i][j])
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 1 <= ni < n and 1 <= nj < n and (ni, nj) not in visited:
                dfs(ni, nj, cnt + 1)
        visited.remove((i, j))

    for i in range(1, n):
        for j in range(1, n):
            dfs(i, j, 0)

    return path