def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        min_path = None
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in path:
                new_path = dfs(ni, nj, path + [m[ni][nj]])
                if min_path is None or path_to_tuple(new_path) < path_to_tuple(
                    min_path
                ):
                    min_path = new_path
        return min_path

    def path_to_tuple(path):
        return tuple(sorted(path))

    start_path = dfs(0, 0, [grid[0][0]])
    return path_to_tuple(start_path)