from collections import deque


def max_fill(grid):
    rows = len(grid)
    cols = len(grid[0])
    capacity = 1
    water = 0
    visited = [[False for _ in range(cols)] for _ in range(rows)]
    queue = deque([(0, 0)])

    while queue:
        i, j = queue.popleft()
        if not visited[i][j] and grid[i][j] == 1:
            water += capacity
            visited[i][j] = True
            for di, dj in [(0, 1), (1, 0)]:
                ni, nj = i + di, j + dj
                if 0 <= ni < rows and 0 <= nj < cols:
                    queue.append((ni, nj))

    return water