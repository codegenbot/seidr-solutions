def minPath(grid, k):
    N = len(grid)

    def dfs(i, j, visited, path, steps):
        visited.add((i, j))
        path.append(grid[i][j])
        if steps == k:
            return path

        neighbors = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        neighbors = [
            (x, y)
            for x, y in neighbors
            if 0 <= x < N and 0 <= y < N and (x, y) not in visited
        ]
        neighbors.sort(key=lambda x: (grid[x[0]][x[1]], x))
        for x, y in neighbors:
            res = dfs(x, y, set(visited), list(path), steps + 1)
            if res is not None:
                return res

    for i in range(N):
        for j in range(N):
            res = dfs(i, j, set(), [], 1)
            if res is not None:
                return res
    
    return None