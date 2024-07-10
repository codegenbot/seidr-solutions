def minPath(grid):
    n = len(grid)
    res = []

    def dfs(i, j, path, visited):
        if len(path) > 0:
            res.append(path)
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                new_visited = set(visited)
                new_visited.add((x, y))
                dfs(x, y, path + [grid[x][y]], new_visited)
        return min(res) if res else []

    return dfs(0, 0, [], {(0, 0)})