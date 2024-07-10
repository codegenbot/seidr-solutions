```
def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path, visited):
        if len(path) > k:
            return
        if len(path) == k:
            return path
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if (
                0 <= x < n
                and 0 <= y < n
                and (x, y) not in visited
            ):
                visited.add((x, y))
                res.append(dfs(x, y, path + [grid[x][y]], visited))
                visited.remove((x, y))

        return min(res) if res else []

    return dfs(0, 0, [grid[0][0]], set([(0, 0)]))