Here is the solution:

def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    queue = [(i, j) for i in range(N) for j in range(N)]
    path_values = []
    
    while queue and k > 0:
        x, y = queue.pop(0)
        if visited[x][y]:
            continue
        visited[x][y] = True
        path_values.append(grid[x][y])
        
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                queue.append((nx, ny))
                
        k -= 1
        
    return path_values