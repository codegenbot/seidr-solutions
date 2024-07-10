def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    res = []
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j):
        if k == 0:
            return res
        if visited[i][j]:
            return []

        visited[i][j] = True
        res.append(m[i][j])
        for d in directions:
            ni, nj = i + d[0], j + d[1]
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                dfs(ni, nj)

        visited[i][j] = False
        return res

    min_path = float("inf")
    for i in range(n):
        for j in range(n):
            if m[i][j] == 1:
                path = dfs(i, j)
                if len(path) == k and len(path) < min_path:
                    min_path = len(path)
                    res = path

    return res