def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    visited = set()
    path = []
    min_path = []

    def dfs(i, j, length):
        nonlocal min_path
        if length > k:
            return
        if (i, j) in visited or len(path) > k:
            return
        visited.add((i, j))
        path.append(m[i][j])
        min_path = path[:]
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                dfs(ni, nj, length + 1)
        path.pop()
        visited.remove((i, j))

    for i in range(n):
        for j in range(n):
            dfs(i, j, 0)
    return min_path