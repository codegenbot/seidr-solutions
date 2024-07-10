def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = set()
    path = []

    def dfs(i, j, path_len, path_values):
        if len(path_values) == k:
            return path_values

        for di, dj in directions:
            ni, nj = i + di, j + dj
            if ni < 0 or ni >= N or nj < 0 or nj >= N or (ni, nj) in visited:
                continue

            visited.add((ni, nj))
            new_path_values = path_values[:] + [grid[ni][nj]]
            dfs(ni, nj, path_len + 1, new_path_values)
            visited.remove((ni, nj))

        return min(
            (
                dfs(i, j, path_len + 1, path_values + [grid[x][y]])
                for x in range(N)
                for y in range(N)
            ),
            key=lambda x: str(x),
        )

    return dfs(0, 0, 0, [])