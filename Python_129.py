def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, curr_path):
        if len(curr_path) == k:
            return curr_path

        visited[i][j] = True
        path = None
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                new_path = dfs(ni, nj, curr_path + [grid[ni][nj]])
                if path is None or len(new_path) < len(path):
                    path = new_path
        visited[i][j] = False
        return path

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                result = dfs(i, j, [grid[i][j]])
                if result:
                    return result
    return []