def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, curr_path):
        nonlocal path
        if len(curr_path) == k:
            path = curr_path[:]
            return True

        visited[i][j] = True
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                if dfs(ni, nj, curr_path + [grid[ni][nj]]):
                    return True

        visited[i][j] = False
        return False

    path = []
    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                if dfs(i, j, [grid[i][j]]):
                    return path

    return []