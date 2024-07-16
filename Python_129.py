def minPath(grid, k):
    N = len(grid)
    visited = set()
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited.add((i, j))
        next_steps = [
            (i + di, j + dj)
            for di, dj in directions
            if 0 <= i + di < N and 0 <= j + dj < N and (i + di, j + dj) not in visited
        ]
        next_steps.sort(key=lambda x: grid[x[0]][x[1]])

        for ni, nj in next_steps:
            new_path = dfs(ni, nj, path + [grid[ni][nj]])
            if new_path:
                return new_path

        visited.remove((i, j))

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path