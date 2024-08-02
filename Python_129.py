```
def findMinPath(grid):
    n = len(grid)
    queue = [(0, 0, [])]
    visited = [[False] * n for _ in range(n)]
    
    while queue:
        x, y, path = queue.pop(0)
        if x == y == n - 1:
            return ''.join(path)
        
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                queue.append((nx, ny, path + [str(grid[nx][ny])]))
                visited[nx][ny] = True