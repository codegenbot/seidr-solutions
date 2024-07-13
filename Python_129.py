def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = set()
    queue = []
    path = []
    
    for i in range(n):
        for j in range(n):
            if (i, j) not in visited:
                queue.append((grid[i][j], (i, j), 0))
                visited.add((i, j))
    
    while queue and len(path) < k:
        _, (x, y), step = heapq.heappop(queue)
        path.append(grid[x][y])
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                heapq.heappush(queue, (grid[nx][ny], (nx, ny), step + 1))
                visited.add((nx, ny))
    
    return path