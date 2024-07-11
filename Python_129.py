```
def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False]*m for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited[i][j] = True
        min_path = path[:]
        for direction in directions:
            new_i, new_j = i + direction[0], j + direction[1]
            if 0 <= new_i < n and 0 <= new_j < m and not visited[new_i][new_j]:
                new_path = dfs(new_i, new_j, path + [grid[new_i][new_j]])
                if len(min_path) > len(new_path) or (len(min_path) == len(new_path) and min_path < new_path):
                    min_path = new_path
        visited[i][j] = False
        return min_path

    for i in range(n):
        for j in range(m):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path

    return []