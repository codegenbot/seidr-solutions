def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return [i] + [j]

        path.append((i, j))
        visited.add((i, j))

        res = None
        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + x, j + y

            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path[:], visited.copy())
                if res is None or m[ni][nj] < min(res):
                    res = new_path

        return res

    res = set()
    for i in range(n):
        for j in range(n):
            temp = dfs(i, j, [], set())
            if res:
                res = [x for x in res if x not in temp]
            else:
                res = temp

    return [m[i][j] for i, j in zip(*[reversed(x) for x in res]) if i < n and j < n]