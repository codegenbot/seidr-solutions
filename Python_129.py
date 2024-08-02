def minPath(grid, k):
    n = len(grid)
    visited = set()

    def dfs(x, y, path):
        if len(path) == k:
            return path

        visited.add((x, y))

        candidates = []
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                candidates.append((nx, ny))

        candidates.sort(key=lambda pos: (grid[pos[0]][pos[1]]))

        for nx, ny in candidates:
            res = dfs(nx, ny, path + [grid[nx][ny]])
            if res:
                return res

        visited.remove((x, y))

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path