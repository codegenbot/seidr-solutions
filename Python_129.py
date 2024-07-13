def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]

    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            res = sorted(path)
            return True

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                path.append(grid[ni][nj])
                if dfs(ni, nj, path):
                    return True
                path.pop()
                visited[ni][nj] = False

        return False

    for i in range(n):
        for j in range(n):
            visited[i][j] = True
            if dfs(i, j, [grid[i][j]]):
                return sorted([grid[i][j] for _ in range(k)])