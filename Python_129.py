def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path

        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        for x, y in directions:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                visited.add((ni, nj))
                res = dfs(ni, nj, path + [grid[ni][nj]], visited)
                if res:
                    return res
                visited.remove((ni, nj))
        return None

    for i in range(n):
        for j in range(n):
            result = dfs(i, j, [], {(i, j)})
            if result:
                return result