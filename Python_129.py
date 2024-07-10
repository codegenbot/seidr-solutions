```
def minPathSum(grid):
    n = len(grid)
    def dfs(i, j, path):
        if i == n-1 and j == n-1:
            return sum(path) + grid[i][j]
        if i < n-1 or j < n-1:
            return float('inf')
        min_path = None
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                new_path = path + [grid[ni][nj]]
                new_path.sort()
                if min_path is None or sum(new_path) < sum(min_path):
                    min_path = new_path
        return min_path

    min_path = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [])
            if min_path is None or sum(path) < sum(min_path):
                min_path = path
    return sum(min_path)