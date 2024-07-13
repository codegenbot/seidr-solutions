def minPath(grid, k):
    N = len(grid)
    memo = {}

    def dfs(i, j, visited, path):
        if (i, j) in memo:
            return memo[(i, j)]
        if len(visited) == k:
            return path
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and (ni, nj) not in visited:
                memo[(i, j)] = min(
                    dfs(ni, nj, visited | {(ni, nj)}, path + [grid[ni][nj]]),
                    dfs(i, j, visited, path),
                )
        return memo[(i, j)]

    paths = set()
    for i in range(N):
        for j in range(N):
            paths.add(tuple(sorted(dfs(i, j, {(i, j)}, [])[:k])))
    return min(path for path in paths)