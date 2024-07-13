def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, length):
        if length == k:
            return path
        visited[i][j] = True
        min_path = path + [grid[i][j]]
        for di, dj in directions:
            ni, nj = i+di, j+dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                new_path = dfs(ni, nj, min_path, length+1)
                if new_path:
                    return new_path
        visited[i][j] = False
        return None

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [], 0)
            if path and len(path) == k:
                return path