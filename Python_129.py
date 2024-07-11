def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    
    queue = [(grid[0][0], [m[0][0]])
    visited = {(0, 0)}
    
    while queue:
        val, path = queue.pop(0)
        if len(path) == k:
            return path
        
        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + path[-1][//n], y + path[-1]%n
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                queue.append((grid[nx][ny], path + [(nx, ny)]))
                visited.add((nx, ny))

    return []