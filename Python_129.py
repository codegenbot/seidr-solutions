
def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    path = []
    min_path = None

    def dfs(i, j, k, path):
        if k == 0:
            return path

        visited[i][j] = True

        if i < 0 or j < 0 or i >= n or j >= m or visited[i][j]:
            return None

        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            result = dfs(x, y, k - 1, path + [grid[x][y]])
            if result is not None:
                return result

        visited[i][j] = False
        path.pop()

    for i in range(n):
        for j in range(m):
            result = dfs(i, j, k - 1, [grid[i][j]])
            if min_path is None or len(result) < len(min_path):
                min_path = result

    return min_path