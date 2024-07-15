def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        min_val = float("inf")
        min_path = None

        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < N and 0 <= y < N and (x, y) not in path:
                new_path = dfs(x, y, path + [(x, y)])
                val = sum(grid[a][b] for a, b in new_path)
                if val < min_val:
                    min_val = val
                    min_path = new_path

        return min_path

    start_paths = []
    for i in range(N):
        for j in range(N):
            start_paths.append(dfs(i, j, [(i, j)]))

    return [
        grid[i][j]
        for i, j in min(start_paths, key=lambda x: sum(grid[a][b] for a, b in x))
    ]