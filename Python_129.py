def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    result = []

    def dfs(i, j, path):
        nonlocal result
        if len(path) > k:
            return
        if len(path) == k:
            if not result or len(result[0]) > len(path[0]):
                result = [path]
            elif len(result[0]) == len(path[0]) and sum(
                x == y for x, y in zip(result[0], path[0])
            ) < sum(x == y for x, y in zip(minPath, path)):
                result = [path]
        if len(path) > 1:
            return
        visited[i][j] = True
        for dx, dy in [(0, -1), (0, 1), (-1, 0), (1, 0)]:
            ni, nj = i + dx, j + dy
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                dfs(ni, nj, [grid[i][j]] + path)
        visited[i][j] = False

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                dfs(i, j, [])

    return result[0]