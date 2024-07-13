def minPath(grid, k):
    n = len(grid)
    memo = {}

    def dfs(i, j, path, visited):
        if (i, j) in visited:
            return
        visited.add((i, j))
        path.append(grid[i][j])
        if len(path) == k + 1:
            res = tuple(sorted(path[:-1]))
            if res not in memo:
                memo[res] = path[-1]
            else:
                return
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n:
                dfs(x, y, path, visited)
        visited.remove((i, j))

    min_path = []
    for i in range(n):
        for j in range(n):
            dfs(i, j, [], set())
    return [x for x in memo.values()]