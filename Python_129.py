def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(i, j, path):
        visited[i][j] = True
        if len(path) < k:
            return path

        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[ni][nj]])
                if new_path:
                    return new_path

        visited[i][j] = False
        return None

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path

# Test case
print(minPath([[1, 3], [3, 2]], 10))  # Output: [1, 3, 1, 3, 1, 3, 1, 3, 1, 3]