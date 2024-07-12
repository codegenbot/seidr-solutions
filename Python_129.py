def minPath(grid, k):
    N = len(grid)
    visited = [[0] * N for _ in range(N)]
    result = []

    def dfs(i, j, path):
        nonlocal result
        if len(path) > len(result):
            result = list(path)
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < N and 0 <= y < N:
                if visited[x][y] < k:
                    visited[x][y] += 1
                    dfs(x, y, path + [grid[i][j]])
                    visited[x][y] -= 1

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                dfs(i, j, [])

    return result