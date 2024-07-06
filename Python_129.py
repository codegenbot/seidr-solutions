def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []

    def dfs(i, j, current_path):
        nonlocal path
        if len(current_path) == k:
            path = current_path[:]
            return True

        if not visited[i][j]:
            visited[i][j] = True
            current_path.append(grid[i][j])

            for x, y in [(0, 1), (1, 0), (-1, 0), (0, -1)]:
                ni, nj = i + x, j + y
                if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                    if dfs(ni, nj, current_path[:]):
                        return True

            visited[i][j] = False
            return False

        return False

    for i in range(N):
        for j in range(N):
            dfs(i, j, [])

    return path