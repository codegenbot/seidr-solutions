def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(i, j, path_sum, path):
        visited[i][j] = True

        if path_sum > k:
            visited[i][j] = False
            return None

        if path_sum == k:
            return path

        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path_sum + grid[ni][nj], path + [grid[ni][nj]])
                if new_path:
                    return new_path

        visited[i][j] = False
        return None

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, grid[i][j], [grid[i][j]])
            if path:
                return path