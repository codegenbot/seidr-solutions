def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    visited = set()
    res = []

    def dfs(x, y, path):
        if len(path) == k:
            return path
        if (x, y) in visited or x < 0 or y < 0 or x >= n or y >= n:
            return None

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n:
                new_path = path + [m[nx][ny]]
                visited.add((nx, ny))
                res.append(dfs(nx, ny, new_path))
                visited.remove((nx, ny))

        return min(
            [p for p in res if p is not None], key=lambda x: (x.count(1), x.index(1))
        )

    return dfs(0, 0, [m[0][0]])