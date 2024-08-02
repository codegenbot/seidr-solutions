```
def minPath(grid):
    n = len(grid)
    m = len(grid[0])
    visited = [[False]*m for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if i < 0 or i >= n or j < 0 or j >= m:
            return None
        if visited[i][j]:
            return None
        visited[i][j] = True
        min_path = [grid[i][j]]
        for direction in directions:
            new_i, new_j = i + direction[0], j + direction[1]
            res = dfs(new_i, new_j, path + [grid[i][j]])
            if res and (not min_path or res < min_path):
                min_path = res
        visited[i][j] = False
        return min_path

    min_path = []
    for i in range(n):
        for j in range(m):
            res = dfs(i, j, [])
            if res and (not min_path or res < min_path):
                min_path = res

    return min_path