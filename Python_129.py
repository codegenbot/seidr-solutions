def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                m[i][j] = 0
            else:
                m[i][j] = 1
    visited = [[False for _ in range(n)] for _ in range(n)]
    path = []

    def dfs(i, j, k):
        nonlocal path
        if k == 0:
            return True
        if i < 0 or i >= n or j < 0 or j >= n or visited[i][j] or m[i][j] == 1:
            return False
        visited[i][j] = True
        path.append(grid[i][j])
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            if dfs(i + x, j + y, k - 1):
                return True
        visited[i][j] = False
        path.pop()
        return False

    for i in range(n):
        for j in range(n):
            if m[i][j] == 0 and dfs(i, j, k):
                return path