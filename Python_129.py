def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]

    def dfs(curr_i, curr_j, path):
        if len(path) == k:
            return path

        visited[curr_i][curr_j] = True
        neighbors = [
            (curr_i + 1, curr_j),
            (curr_i - 1, curr_j),
            (curr_i, curr_j + 1),
            (curr_i, curr_j - 1),
        ]
        neighbors.sort(key=lambda x: (grid[x[0]][x[1]], x) if 0 <= x[0] < N and 0 <= x[1] < N else (float('inf'), x))

        for ni, nj in neighbors:
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                res = dfs(ni, nj, path + [grid[ni][nj]])
                if res:
                    return res

        visited[curr_i][curr_j] = False

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path