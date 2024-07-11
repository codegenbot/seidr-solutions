```
from collections import deque

def minPath(grid, k):
    n = len(grid)
    res = []
    for _ in range(k):
        queue = [(i, j, i * n + j) for i in range(n) for j in range(n)]
        visited = set()
        cur_min = float("inf")
        while queue:
            x, y, cell = queue.popleft()
            if (x, y, cell) not in visited:
                visited.add((x, y, cell))
                if cell < cur_min:
                    cur_min = cell
        res.append(cur_min)
    return res