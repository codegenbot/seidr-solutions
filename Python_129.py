n = int(input("Enter number of rows: "))
m = int(input("Enter number of columns: "))
grid = []
for _ in range(n):
    row = list(map(str, input().split()))
    grid.append(row)
k = int(input("Enter the path length: "))


def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            return [path]
        paths = []
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and grid[x][y] not in path:
                paths.extend(dfs(x, y, path + [grid[x][y]]))
        return paths

    for i in range(n):
        for j in range(m):
            res.extend(dfs(i, j, [grid[i][j]]))

    return min([p[1:] for p in res if len(p) == k])