```
def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    path_sum = float('inf')

    def dfs(i, j, current_path):
        nonlocal path_sum
        if len(current_path) > k:
            return

        visited[i][j] = True
        for direction in directions:
            ni, nj = i + direction[0], j + direction[1]
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                dfs(ni, nj, current_path + [grid[ni][nj]])
                visited[i][j] = False
        path_sum = min(path_sum, sum(current_path))
        return

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                dfs(i, j, [grid[i][j]])

    return path_sum