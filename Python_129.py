```
def minPath(grid, k):
    n = len(grid)
    m = [[0] * n for _ in range(n)]
    res = []
    for _ in range(k):
        temp = {}
        for i in range(n):
            for j in range(n):
                if (m[i][j], res) not in temp:
                    temp[(m[i][j], res)] = [(i, j)]
                else:
                    temp[(m[i][j], res)].append((i, j))
        min_val = min(temp.keys())
        res.append(min_val[0])
        for p in temp[min_val]:
            m[p[0]][p[1]] -= 1
    return res