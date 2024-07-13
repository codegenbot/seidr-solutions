def findMinSum(grid):
    n = len(grid)
    m = len(grid[0])
    min_sum = float('inf')
    
    for k in range(1, n*m+1):
        visited = [[False]*m for _ in range(n)]
        queue = [(0, 0, grid[0][0])]
        current_sum = 0
        
        while queue:
            x, y, path_sum = queue.pop(0)
            
            if k == len(str(path_sum)):
                current_sum += path_sum
                min_sum = min(min_sum, current_sum) if min_sum > current_sum else min_sum
            
            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nx, ny = x + dx, y + dy
                
                if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny]:
                    queue.append((nx, ny, path_sum+grid[nx][ny]))
                    visited[nx][ny] = True
    
    return min_sum