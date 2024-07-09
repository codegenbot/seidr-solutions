def minPath(grid, k):
    N = len(grid)
    visited = set()
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited.add((i, j))
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [grid[ni][nj]])
                if new_path:
                    return new_path

        visited.remove((i, j))

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path