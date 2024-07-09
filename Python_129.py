def minPath(grid, k):
    n = len(grid)

    def dfs(i, j, visited):
        if len(visited) == k:
            return visited
        visited.add((i, j))
        neighbors = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        neighbors = [
            (x, y)
            for x, y in neighbors
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited
        ]
        neighbors.sort(key=lambda x: (grid[x[0]][x[1]], x))
        for x, y in neighbors:
            res = dfs(x, y, visited.copy())
            if res:
                return [grid[i][j]] + res

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, set())
            if path:
                return path