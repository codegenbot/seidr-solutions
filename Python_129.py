def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    queue = [(0, 0, [grid[0][0]])
    res = []
    
    while queue:
        x1, y1, path = queue.pop(0)
        
        if len(path) == k:
            res = path
            break
        
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x2, y2 = x1 + dx, y1 + dy
            
            if 0 <= x2 < N and 0 <= y2 < N and not visited[x2][y2]:
                queue.append((x2, y2, path + [grid[x2][y2]]))
                visited[x2][y2] = True
    
    return res