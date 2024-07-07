def minPath(grid, k):
    N = len(grid)
    seen = set()
    path = []
    def dfs(x, y, val):
        if (x, y) in seen:
            return
        seen.add((x, y))
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and (nx, ny) not in seen:
                for i in range(k):
                    path.append(val)
                    dfs(nx, ny, grid[nx][ny])
    min_path = []
    for i in range(N):
        for j in range(N):
            if (i, j) not in seen:
                val = grid[i][j]
                dfs(i, j, val)
                if len(path) == k + 1:
                    path = [val] * k
                    min_path.append(path)
    return min(min_path)[::-1]