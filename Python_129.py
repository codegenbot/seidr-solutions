def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    path_sum = []
    total_path_sum = []

    def dfs(i, j, current_sum, current_path):
        nonlocal path_sum
        if len(current_path) == k:
            if not total_path_sum or sum(current_path) < sum(total_path_sum[0]):
                total_path_sum = [current_path[:]]
            elif sum(current_path) == sum(total_path_sum[0]):
                total_path_sum.append(current_path[:])
            return

        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                dfs(ni, nj, current_sum + grid[ni][nj], current_path + [grid[ni][nj]])
                visited[ni][nj] = False

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                visited[i][j] = True
                dfs(i, j, grid[i][j], [grid[i][j]])
                visited[i][j] = False

    return total_path_sum[0]