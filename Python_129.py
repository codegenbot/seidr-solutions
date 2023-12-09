def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    total_cells = n * m
    path = []
    visited = set()
    queue = deque([(0, 0, 1)])
    
    while queue:
        i, j, curr_len = queue.popleft()
        
        if grid[i][j] != -1 and (i, j) not in visited:
            visited.add((i, j))
            
            if curr_len == k:
                path.append(grid[i][j])
                
            for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                if 0 <= i + di < n and 0 <= j + dj < m and grid[i + di][j + dj] != -1:
                    queue.append((i + di, j + dj, curr_len + 1))
    
    return path