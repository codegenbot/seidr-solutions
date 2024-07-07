```
def minPath(grid, k):
    n = len(grid)
    m = [(i, j) for i in range(n) for j in range(n)]
    m.sort(key=lambda x: grid[x[0]][x[1]])
    
    path = []
    last_value = None
    for _ in range(k):
        for cell in m:
            if grid[cell[0]][cell[1]] != last_value and (last_value is None or grid[cell[0]][cell[1]] < last_value):
                path.append(grid[cell[0]][cell[1]])
                last_value = grid[cell[0]][cell[1]]
                break
    return path