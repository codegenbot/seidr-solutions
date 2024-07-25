def minPathSum(grid):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]
    min_path = []

    def dfs(i, j, k, path):
        if k == 0:
            return True
        if i < 0 or i >= n or j < 0 or j >= m or grid[i][j] > k or visited[i][j]:
            return False

        visited[i][j] = True
        path.append(grid[i][j])

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = i + dx, j + dy
            if dfs(nx, ny, k - 1, path):
                return True

        visited[i][j] = False
        path.pop()

        return False

    for i in range(n):
        for j in range(m):
            if grid[i][j] <= 0:
                continue
            path = [grid[i][j]]
            dfs(i, j, grid[i][j], path)
            if not min_path or len(path) < len(min_path):
                min_path = path

    return min_path