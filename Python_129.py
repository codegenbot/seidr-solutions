```
def minPath(grid, k):
    n = len(grid)
    m = [(grid[i][0], i, 0) for i in range(n)]
    m.sort()
    path = [m[0][0]]
    
    for _ in range(k-1):
        prev = m.pop(0)[2]
        for cell in m[:]:
            if cell[2] == prev:
                m.remove(cell)
                break
        m.sort()
        path.append(m[0][0])
    
    return path