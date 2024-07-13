```
from typing import List
from collections import deque


def shortestPaths() -> list:
    result = []
    n = int(input("Enter the number of rows in the grid: "))
    m = int(input("Enter the number of columns in the grid: "))
    
    grid = [[0]*m for _ in range(n)]
    k = int(input("Enter the target value: "))

    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    queue = deque()

    for i in range(n):
        row = input().split()
        for j in range(m):
            grid[i][j] = int(row[j])
            if grid[i][j] == k:
                queue.append((i, j, 0))

    visited = set()
    while queue:
        x, y, dist = queue.popleft()

        if (x, y) not in visited:
            visited.add((x, y))

            for dx, dy in directions:
                nx, ny = x + dx, y + dy
                if 0 <= nx < n and 0 <= ny < m:
                    if grid[nx][ny] == k:
                        result.append((nx, ny, dist))
                    elif (nx, ny) not in visited:
                        queue.append((nx, ny, dist + 1))

    return result

print(shortestPaths())