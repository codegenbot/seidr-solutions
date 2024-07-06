def findMinPath(grid):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    min_path = []
    min_sum = float('inf')

    def dfs(i, j, current_path, current_sum):
        nonlocal min_sum, min_path
        if len(current_path) == n * n:
            if current_sum < min_sum:
                min_sum = current_sum
                min_path = current_path[:]
            return

        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + dx, j + dy
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                visited[ni][nj] = True
                dfs(ni, nj, current_path + [grid[ni][nj]], current_sum + grid[ni][nj])
                visited[ni][nj] = False

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                visited[i][j] = True
                dfs(i, j, [grid[i][j]], grid[i][j])
                visited[i][j] = False

    return min_path