def minPath(grid):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == "1":
                path = [grid[i][j]]
                dfs(i, j, grid, path, res)
    return res


def dfs(i, j, grid, path, res):
    n = len(grid)
    if i < 0 or i >= n or j < 0 or j >= n:
        return
    for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        ni, nj = i + x, j + y
        if (
            0 <= ni < n
            and 0 <= nj < n
            and grid[ni][nj] == "1"
            and grid[ni][nj] not in path
        ):
            temp = grid[ni][nj]
            grid[ni][nj], path.append(temp)
            dfs(ni, nj, grid, path, res)
            grid[ni][nj] = temp
            if len(res) > 0 and len(path) + len(res[-1]) == sum(
                [int(1) for row in grid for cell in row]
            ):
                return