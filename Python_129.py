def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n+1)] for i in range(1, n+1)]
    visited = set()
    queue = [(0, [m[0][0]])
    res = []
    
    while queue:
        state, path = queue.pop(0)
        cell_value = m[state[0]][state[1]]
        
        if len(path) == k:
            if not visited or tuple(sorted(path)) < tuple(sorted(res)):
                res = path
            continue
        
        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            x, y = state[0] + dx, state[1] + dy
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited:
                queue.append(((x, y), path + [cell_value]))
                visited.add((x, y))
                
    return list(res)