```
def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]
    
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                m[i][j] = 0
            else:
                m[i][j] = 1
    
    res = []
    pos = [(i, j) for i in range(n) for j in range(n)]
    
    while k > 0 and len(res) < k:
        min_val = float('inf')
        min_pos = None
        for p in pos:
            if m[p[0]][p[1]] == 0:
                if grid[p[0]][p[1]] < min_val:
                    min_val = grid[p[0]][p[1]]
                    min_pos = p
        res.append(min_val)
        m[min_pos[0]][min_pos[1]] = 2
        pos.remove(min_pos)
    
    return res