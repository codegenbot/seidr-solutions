```
def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    queue = [(grid[0][0], [grid[0][0]], 0)]
    res = []
    
    while queue:
        val, path, step = queue.pop(0)
        if step == k:
            res = sorted(path)
            break
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = (dx+path[-1][0])%N, (dy+path[-1][1])%N
            if visited[x][y] or grid[x][y] in path:
                continue
            queue.append((grid[x][y], path+[grid[x][y]], step+1))
            visited[x][y] = True
    
    return res