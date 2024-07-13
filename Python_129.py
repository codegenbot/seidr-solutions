```Python
from typing import List, Tuple
import collections
import math

def shortestPaths(grid: List[List[int]], k: int) -> list:
    m, n = len(grid), len(grid[0])
    res = [[math.inf for _ in range(n)] for _ in range(m)]
    
    queue = collections.deque([(i, j) for i in range(m) for j in range(n) if grid[i][j] == k])
    res[k[0]][k[1]] = 0
    
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    
    while queue:
        x, y = queue.popleft()
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < m and 0 <= ny < n and res[nx][ny] > res[x][y] + 1:
                res[nx][ny] = res[x][y] + 1
                queue.append((nx, ny))
    
    result = [(i, j) for i in range(m) for j in range(n) if res[i][j] != math.inf]
    return result