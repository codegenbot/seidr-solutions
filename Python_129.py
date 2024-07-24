def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    path = []

    def dfs(i, j, remaining):
        nonlocal path
        if remaining == 0:
            return True
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if (
                0 <= ni < n
                and 0 <= nj < n
                and not visited[ni][nj]
                and grid[ni][nj] not in path
            ):
                visited[ni][nj] = True
                path.append(grid[ni][nj])
                if dfs(ni, nj, remaining - 1):
                    return True
                path.pop()
                visited[ni][nj] = False
        return False

    for i in range(n):
        for j in range(n):
            visited[i][j] = False
    path.sort()
    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                visited[i][j] = True
                if dfs(i, j, k):
                    return path[: k + 1]
    return []