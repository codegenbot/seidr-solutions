def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path

        visited.add((i, j))
        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < N and 0 <= y < N and (x, y) not in visited:
                new_path = dfs(x, y, path + [grid[x][y]], visited)
                if new_path:
                    return new_path

        visited.remove((i, j))

    for i in range(N):
        for j in range(N):
            result = dfs(i, j, [grid[i][j]], set())
            if result:
                return result