def minPath(grid, k):
    n = len(grid)
    m = [[(i * n + j) for j in range(n)] for i in range(n)]
    res = []
    for _ in range(k):
        temp = {}
        for i in range(n):
            for j in range(n):
                if (i, j) not in res and m[i][j] not in temp:
                    temp[m[i][j]] = [(i, j)]
                elif (i, j) not in res and m[i][j] in temp:
                    temp[m[i][j]].append((i, j))
        for x in sorted(temp):
            for y in temp[x]:
                res.append(x)
                break
    return res