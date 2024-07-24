def minPath(grid, k):
    n = len(grid)
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                x, y = i, j
    dx, dy = [-1, 1, 0, 0], [0, 0, -1, 1]
    ans = [grid[x][y]]
    for _ in range(k - 1):
        min_val = float("inf")
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]
            if 0 <= nx < n and 0 <= ny < n:
                if grid[nx][ny] < min_val:
                    min_val = grid[nx][ny]
                    tx, ty = nx, ny
        x, y = tx, ty
        ans.append(grid[x][y])
    return ans