def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    path = []

    def dfs(i, j, current_path):
        nonlocal path
        if len(current_path) == k:
            path = current_path[:]
            return True
        visited[i][j] = True
        for direction in directions:
            new_i, new_j = i + direction[0], j + direction[1]
            if 0 <= new_i < n and 0 <= new_j < n and not visited[new_i][new_j]:
                dfs(new_i, new_j, current_path + [grid[i][j]])
        visited[i][j] = False
        return False

    for i in range(n):
        for j in range(n):
            if dfs(i, j, [grid[i][j]]):
                return path