def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    visited = set()
    path = []

    def dfs(x, y, length):
        if (x, y) in visited:
            return
        visited.add((x, y))
        path.append(m[x][y])

        if length == k:
            nonlocal res
            res = sorted(path)
            return

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n:
                dfs(nx, ny, length + 1)

        visited.remove((x, y))
        path.pop()

    res = []
    for i in range(n):
        for j in range(n):
            dfs(i, j, 0)

    return res