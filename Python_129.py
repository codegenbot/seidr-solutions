```
def minPath(grid):
    n = len(grid)
    m = len(grid[0])
    visited = [[False]*m for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if i == n-1 and j == m-1:
            return path
        visited[i][j] = True
        for direction in directions:
            new_i, new_j = i + direction[0], j + direction[1]
            if 0 <= new_i < n and 0 <= new_j < m and not visited[new_i][new_j]:
                res = dfs(new_i, new_j, path + [grid[i][j]])
                if res:
                    return res
        visited[i][j] = False
        return None

    min_path = []
    for i in range(n):
        for j in range(m):
            path = dfs(i, j, [])
            if path and (not min_path or path < min_path):
                min_path = path

    return min_path