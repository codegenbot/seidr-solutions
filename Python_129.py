def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    result = []
    min_path = []

    def dfs(i, j, path):
        nonlocal min_path
        if len(path) > len(min_path):
            min_path = list(path)
        if len(path) == k:
            return
        visited[i][j] = True
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < N and 0 <= y < N and not visited[x][y]:
                dfs(x, y, path + [grid[i][j]])
        visited[i][j] = False

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                dfs(i, j, [])

    return min_path