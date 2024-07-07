```
def minPath(grid, k):
    n = len(grid)
    for i in range(n):
        grid[i] = list(map(str, grid[i]))
    
    queue = [(0, [str(i) for i in grid[0]]),]
    visited = set([tuple(grid[0])])
    result = None
    
    while queue:
        path, values = queue.pop(0)
        if len(values) == k:
            if result is None or values < result:
                result = values
        else:
            for i in range(n):
                new_values = values + [grid[i][path % n]]
                if tuple(new_values) not in visited:
                    visited.add(tuple(new_values))
                    queue.append((path+1, new_values))
    
    return list(map(int, result))