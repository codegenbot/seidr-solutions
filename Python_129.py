def minPath(grid, k):
    n = len(grid)
    m = [(i, j) for i in range(n) for j in range(n)]
    visited = set()
    path = []

    def dfs(i, j, curr_path):
        nonlocal path
        if len(curr_path) == k:
            if not path or sorted(curr_path) < sorted(path):
                path = list(curr_path)
            return
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                visited.add((x, y))
                curr_path.append(grid[x][y])
                dfs(x, y, curr_path)
                visited.remove((x, y))

    for i, j in m:
        if (i, j) not in visited:
            visited.add((i, j))
            dfs(i, j, [grid[i][j]])
    return path