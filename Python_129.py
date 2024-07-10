def minPath(grid, k):
    n = len(grid)
    visited = [[False for _ in range(n)] for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, current_path, current_sum):
        nonlocal path
        if len(current_path) == k:
            nonlocal path
            path = sorted(current_path)
            return True

        visited[i][j] = True
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_sum = current_sum + grid[ni][nj]
                if new_sum > k: 
                    continue
                if dfs(ni, nj, current_path + [grid[ni][nj]], new_sum):
                    return True
        visited[i][j] = False

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]], grid[i][j])

    return path