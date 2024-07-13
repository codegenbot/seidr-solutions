def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    res = []
    for _ in range(k):
        temp = {}
        for i in range(n):
            for j in range(n):
                if (
                    (i - 1 >= 0 and m[i - 1][j] <= m[i][j])
                    or (i + 1 < n and m[i + 1][j] <= m[i][j])
                    or (j - 1 >= 0 and m[i][j - 1] <= m[i][j])
                    or (j + 1 < n and m[i][j + 1] <= m[i][j])
                ):
                    continue
                if m[i][j] not in temp:
                    temp[m[i][j]] = [(i, j)]
                else:
                    temp[m[i][j]].append((i, j))
        min_val = min(temp)
        res.extend(sorted([m[x][y] for x, y in temp[min_val]]))
    return res