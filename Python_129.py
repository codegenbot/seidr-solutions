def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    paths = []

    def dfs(i, j, current_path, path_length):
        nonlocal paths
        if path_length == k:
            paths.append(sorted(current_path))
            return

        visited[i][j] = True
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                dfs(ni, nj, current_path + [grid[ni][nj]], path_length + 1)
        visited[i][j] = False

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]], 0)

    return paths