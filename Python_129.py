def findMinLength(grid):
    n = len(grid)
    m = len(grid[0])
    min_length = float('inf')
    
    for i in range(n):
        for j in range(m):
            if grid[i][j] == 'O':
                queue = [(i, j)]
                visited = [[False]*m for _ in range(n)]
                length = 0
                
                while queue:
                    x, y = queue.pop(0)
                    if visited[x][y]:
                        continue
                    visited[x][y] = True
                    
                    if grid[x][y] == 'X':
                        min_length = min(min_length, length)
                        break
                    else:
                        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                            nx, ny = x + dx, y + dy
                            if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny]:
                                queue.append((nx, ny))
                if min_length != float('inf'):
                    break
    
    return -1 if min_length == float('inf') else min_length