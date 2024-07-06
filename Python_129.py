def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    res = []
    for _ in range(k):
        temp = {}
        for i in range(n):
            for j in range(n):
                if (i, j) not in res:
                    if m[i][j] not in temp or len(temp) < k - len(res):
                        temp[m[i][j]] = [(i, j)]
                    else:
                        temp[m[i][j]].append((i, j))
        for val in sorted(temp.keys()):
            for cell in temp[val]:
                res.append(val)
                m[cell[0]][cell[1]] = None
    return [val for val in res if val is not None]