def shortestPaths(grid, k):
    result = []
    visited = [[False for _ in range(len(grid[0]))] for _ in range(len(grid))]

    def dfs(i, j, path, visited, k, index, result):
        if (
            i < 0
            or i >= len(grid)
            or j < 0
            or j >= len(grid[0])
            or visited[i][j]
            or path.index(index) + 1 > k
        ):
            return

        if i == 0 and j == 0:
            result.append(path[:])

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + dx, j + dy
            if 0 <= ni < len(grid) and 0 <= nj < len(grid[0]):
                dfs(ni, nj, path + [index], visited, k, index, result)

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            dfs(i, j, [], [[i * len(grid) + j]], k, [i * len(grid) + j], [result])

    if not result:
        return []
    else:
        return min(result)