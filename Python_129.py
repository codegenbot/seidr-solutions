def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    result = []
    direction = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        nonlocal result
        if len(path) == k:
            return True
        visited[i][j] = True
        for di, dj in direction:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                path.append(grid[ni][nj])
                if dfs(ni, nj, path):
                    return True
                path.pop()
        visited[i][j] = False
        return False

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                if dfs(i, j, []):
                    result = sorted(result)
                    return result
    return []