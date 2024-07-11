```
def minPath(grid, k):
    n = len(grid)
    m = [[0 for _ in range(n)] for _ in range(n)]
    res = []
    directions = [(0,1),(0,-1),(1,0),(-1,0)]
    for _ in range(k):
        temp = {}
        for i in range(n):
            for j in range(n):
                if grid[i][j] > 0:
                    for d in directions:
                        ni,nj = i+d[0],j+d[1]
                        if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] > 0:
                            if (m[i][j], res) not in temp:
                                temp[(m[i][j], res)] = [(i, j)]
                            else:
                                temp[(m[i][j], res)].append((i, j))
        min_val = min(temp.keys())
        res.append(min_val[0])
        for p in temp[min_val]:
            m[p[0]][p[1]] -= 1
    return res