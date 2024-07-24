```
def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    
    res = []
    x, y = 0, 0
    for _ in range(k):
        res.append(m[x][y])
        dx, dy = [-1, 0, 1, 0], [0, -1, 0, 1]
        for i in [(x-1, y), (x, y-1), (x+1, y), (x, y+1)]:
            if 0 <= i[0] < n and 0 <= i[1] < n and m[i[0]][i[1]] not in res:
                x, y = i
                break
    
    return res