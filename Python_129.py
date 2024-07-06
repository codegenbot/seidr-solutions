def minPath(grid, k):
    N = len(grid)
    res = []
    visited = [[False] * N for _ in range(N)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        path.append(grid[i][j])
        min_val = grid[i][j]
        min_path = path[:]

        for ni, nj in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                new_path = dfs(ni, nj, path)
                if len(new_path) == k:
                    return new_path
        visited[i][j] = False
        return min_path

    for i in range(N):
        for j in range(N):
            res.append(dfs(i, j, []))

    return [x[0] for x in sorted(res)]