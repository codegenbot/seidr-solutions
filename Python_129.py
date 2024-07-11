```
from collections import deque

def minPath(grid, k):
    n = len(grid)
    res = []

    for _ in range(k):
        queue = deque([(i, j, i * n + j) for i in range(n) for j in range(n)])
        visited = set()
        cur_min = float("inf")

        while queue:
            x, y, cell = queue.popleft()

            if (x, y, cell) not in visited:
                visited.add((x, y, cell))
                cur_min = min(cur_min, cell)

        res.append(cur_min)

    return res

grid = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
k = 1
print(minPath(grid, k))