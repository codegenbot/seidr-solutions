```
def minPath(grid):
    n = len(grid)
    visited = set((0, 0))

    def dfs(i, j, path):
        if (i, j) == (n - 1, n - 1):
            return path
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if (
                0 <= x < n and 0 <= y < n
                and (x, y) not in visited
                and abs(grid[x][y] - grid[i][j]) == 1
            ):
                visited.add((x, y))
                res = dfs(x, y, path + [grid[x][y]])
                visited.remove((x, y))
                if res:
                    return res
        return []

    return dfs(0, 0, [grid[0][0]])