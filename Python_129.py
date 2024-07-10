def minPath(grid):
    n = len(grid)
    visited = set((0, 0))
    res = float("inf")
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path_length, path):
        nonlocal res
        if len(path) > res:
            return
        if path_length == n * n:
            res = min(res, len(path))
            return
        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                visited.add((x, y))
                dfs(x, y, path_length + 1, path + [grid[x][y]])
                visited.remove((x, y))

    dfs(0, 0, 1, [grid[0][0]])
    return [
        num
        for _, num in sorted(
            zip(visited, [grid[i][j] for i, j in zip(*[grid[i] for i in range(n)])])
        )
        if _ in visited
    ]