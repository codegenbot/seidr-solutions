def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            return [path]

        for di in (-1, 0, 1):
            for dj in (-1, 0, 1):
                ni, nj = i + di, j + dj
                if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in res:
                    res.append((ni, nj))
                    dfs(ni, nj, path + [grid[ni][nj]])
                    res.pop()

        return sorted([p for p in itertools.permutations(path)])

    return min(dfs(0, 0, [grid[0][0]]), key=lambda x: (x.index(min(x)), x))