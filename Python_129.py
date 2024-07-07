def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(x, y, path, count):
        if count == k:
            return path
        if visited[x][y]:
            return None

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                if (nx, ny) not in path:
                    new_path = path + [(nx, ny)]
                    result = dfs(nx, ny, new_path, count + 1)
                    if result is not None:
                        return result
        visited[x][y] = True
        return None

    min_path = []
    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [(i, j)], 0)
            if path and (not min_path or path < min_path):
                min_path = path

    return [grid[x][y] for x, y in min_path]