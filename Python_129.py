def minPath(grid, k):
    N = len(grid)
    visited = [[False for _ in range(N)] for _ in range(N)]
    path = []

    def dfs(i, j, current_path):
        nonlocal path
        if len(current_path) == k:
            path = current_path[:]
            return True

        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                visited[ni][nj] = True
                current_path.append(grid[ni][nj])
                if dfs(ni, nj, current_path):
                    return True
                current_path.pop()
                visited[ni][nj] = False

        return False

    for i in range(N):
        for j in range(N):
            visited[i][j] = True
            if dfs(i, j, [grid[i][j]]):
                return path