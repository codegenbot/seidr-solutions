def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, remain_steps):
        if remain_steps == 0:
            return path

        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and grid[ni][nj] not in path:
                new_path = dfs(ni, nj, path + [grid[ni][nj]], remain_steps - 1)
                if new_path:
                    return new_path

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [grid[i][j]], k - 1)
            if path:
                return path