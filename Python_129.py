```
from typing import List
from collections import deque


def shortestPaths(grid: List[List[int]], k: int) -> list:
    result = []
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    queue = deque()

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == k:
                queue.append((i, j, 0))

    visited = set()
    while queue:
        x, y, dist = queue.popleft()

        if (x, y) not in visited:
            visited.add((x, y))

            for dx, dy in directions:
                nx, ny = x + dx, y + dy
                if 0 <= nx < len(grid) and 0 <= ny < len(grid[0]):
                    if grid[nx][ny] == k:
                        result.append(((nx, ny), dist))
                        queue.append((nx, ny, dist + 1))
                    else:
                        queue.append((nx, ny, dist + 1))

    min_dist = min([item[2] for item in result])
    shortest_paths = [path for path in result if path[2] == min_dist]
    
    return [(path[0], path[2]) for path in sorted(shortest_paths)]