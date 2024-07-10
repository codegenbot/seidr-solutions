```
def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]
    for i in range(n):
        for j in range(n):
            m[i][j] = (grid[i][j], i, j)
    
    m.sort()
    path = [m[0][0]]
    cur = m[0][1]
    for _ in range(k-1):
        for i in range(3):
            if i == 0 and cur - n > 0:
                cur -= n
            elif i == 1 and cur + 1 < n*n:
                cur += 1
            elif i == 2 and cur - 1 >= 0:
                cur -= 1
        path.append(m[cur][0])
    return path