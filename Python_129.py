def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        min_path = path
        for direction in directions:
            ni, nj = i + direction[0], j + direction[1]
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[ni][nj]])
                if len(new_path) == k:
                    min_path = new_path
        visited[i][j] = False
        return min_path

    for i in range(N):
        for j in range(N):
            min_path = dfs(i, j, [grid[i][j]])
            if len(min_path) == k:
                return min_path