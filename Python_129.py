def minPath(grid, k):
    n = len(grid)
    res = float("inf")

    def dfs(i, j, path):
        nonlocal res
        if len(path) >= k:
            res = (
                min(res, sum(int(digit) for digit in path))
                if res > sum(int(digit) for digit in path)
                else res
            )

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n:
                dfs(ni, nj, path + [grid[ni][nj]])

    for i in range(n):
        for j in range(n):
            visited = [[False] * n for _ in range(n)]
            visited[i][j] = True
            dfs(i, j, [grid[i][j]])
            visited[i][j] = False

    return res if res != float("inf") else []