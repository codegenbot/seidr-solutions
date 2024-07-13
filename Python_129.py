```
from typing import List

def shortestPaths(grid: List[List[int]], k: int) -> List:
    m, n = len(grid), len(grid[0])
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    queue = []
    visited = [[False] * n for _ in range(m)]
    result = []

    for i in range(m):
        for j in range(n):
            if grid[i][j] == k:
                queue.append((i, j))
                visited[i][j] = True

    while queue:
        x, y = queue.pop(0)
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < m and 0 <= ny < n and not visited[nx][ny]:
                if grid[nx][ny] == k:
                    result.append((nx, ny))
                queue.append((nx, ny))
                visited[nx][ny] = True

    return result