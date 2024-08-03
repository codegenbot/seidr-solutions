```
def minPath(grid, k):
    N = len(grid)
    seen = set()
    queue = [(grid[0][0], [grid[0][0]])]
    ans = []
    
    while queue:
        (val, path) = queue.pop(0)
        
        if len(path) == k + 1:
            if path not in seen:
                seen.add(tuple(sorted(path)))
                ans = sorted(path[:-1])
            continue
        
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            nx, ny = x + N * y
            if 0 <= nx < N and 0 <= ny < N:
                new_val = grid[nx][ny]
                queue.append((new_val, path + [new_val]))
    
    return ans