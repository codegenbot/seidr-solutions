def minPath(grid, k):
    N = len(grid)
    start = min((grid[i][j], i, j) for i in range(N) for j in range(N))[1:]
    dx, dy = [0, 1, 0, -1], [1, 0, -1, 0]
    visited = set()
    path = []

    def dfs(x, y, length, curr_path):
        if length == k:
            curr_path.append(grid[x][y])
            return True
        visited.add((x, y))
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]
            if 0 <= nx < N and 0 <= ny < N and (nx, ny) not in visited:
                if dfs(nx, ny, length + 1, curr_path):
                    return True
        visited.remove((x, y))
        return False

    dfs(*start, 1, path)
    return path