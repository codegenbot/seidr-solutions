def minPath(grid):
    n = len(grid)
    path = []

    def dfs(i, j, current_path):
        nonlocal path
        if not current_path:
            path = current_path[:]
            return
        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + dx, j + dy
            if 0 <= ni < n and 0 <= nj < n:
                dfs(ni, nj, current_path + [grid[ni][nj]])

    for i in range(n):
        for j in range(n):
            dfs(i, j, [])

    return path