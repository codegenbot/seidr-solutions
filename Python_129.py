```
def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, total):
        if total > k:
            return None
        if i == n - 1 and j == n - 1 and total <= k:
            return [path + [grid[i][j]]]
        visited[i][j] = True
        min_path = []
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[i][j]], total + grid[i][j])
                if isinstance(new_path, list):
                    if min_path == [] or sum(x for x in new_path) >= sum(x for x in min_path):
                        min_path = new_path
        visited[i][j] = False
        return min_path if min_path else [total]

    res = dfs(0, 0, [], 0)
    return [x for x in res]