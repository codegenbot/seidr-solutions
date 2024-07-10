def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < N and 0 <= y < N and not visited[x][y]:
                new_path = dfs(x, y, path + [grid[x][y]])
                if new_path:
                    return new_path
        visited[i][j] = False
        return None

    for i in range(N):
        for j in range(N):
            result = dfs(i, j, [grid[i][j]])
            if result:
                return result