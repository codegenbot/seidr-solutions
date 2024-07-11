```
def minPath(grid, k):
    n = len(grid)
    m = [[0 for _ in range(n)] for _ in range(n)]
    res = []
    for _ in range(k):
        temp = {}
        for i in range(n):
            for j in range(n):
                if grid[i][j] not in temp:
                    temp[grid[i][j]] = [(i, j)]
                else:
                    temp[grid[i][j]].append((i, j))
        min_val = min(temp.keys())
        res.append(min_val)
        for p in temp[min_val]:
            m[p[0]][p[1]] -= 1
    return res