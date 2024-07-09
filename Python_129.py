def minPath(grid, k):
    N = len(grid)
    n = N * N
    visited = [[False] * N for _ in range(N)]
    paths = []

    def dfs(i, j, path, visited):
        if len(path) == k:
            paths.append(path[:])
            return
        if visited[i][j]:
            return
        visited[i][j] = True
        path.append(grid[i][j])
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            new_i, new_j = i + x, j + y
            if 0 <= new_i < N and 0 <= new_j < N:
                dfs(new_i, new_j, path, visited)
        visited[i][j] = False

    for i in range(N):
        for j in range(N):
            dfs(i, j, [], visited)

    paths.sort()
    return paths[0]