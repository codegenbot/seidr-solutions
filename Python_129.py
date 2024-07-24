```
def minPath(grid, k):
    N = len(grid)
    visited = set()
    queue = [(grid[0][0], [grid[0][0]])]
    res = []
    
    while queue:
        cell, path = queue.pop(0)
        if len(path) == k:
            res = sorted(path)
            return res
        
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = cell // N + dx, cell % N + dy
            if 0 <= x < N and 0 <= y < N and (x, y) not in visited:
                new_cell = N * x + y
                queue.append((new_cell, path + [new_cell]))
                visited.add((x, y))
    
    return res