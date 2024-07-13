def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []

    def dfs(i, j, length):
        nonlocal path
        if length == k:
            return [grid[i][j]]

        if visited[i][j]:
            return []

        visited[i][j] = True

        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        min_val = float("inf")
        res = None
        for dx, dy in directions:
            new_i, new_j = i + dx, j + dy
            if 0 <= new_i < N and 0 <= new_j < N:
                new_path = dfs(new_i, new_j, length + 1)
                if new_path and new_path[0] < min_val:
                    min_val = new_path[0]
                    res = new_path

        visited[i][j] = False
        return [min_val] + res

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, 0)

    return path