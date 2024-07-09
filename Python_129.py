def minPath(grid, k):
    N = len(grid)

    def dfs(i, j, path):
        if len(path) == k:
            return path

        if len(path) > k:
            return None

        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        min_path = None

        for di, dj in directions:
            ni, nj = i + di, j + dj

            if 0 <= ni < N and 0 <= nj < N:
                new_path = dfs(ni, nj, path + [grid[ni][nj]])

                if new_path is not None:
                    if min_path is None or len(new_path) < len(min_path):
                        min_path = new_path

        return min_path

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path