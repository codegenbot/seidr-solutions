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
                if grid[x][y] < cur_min:
                    cur_min = grid[x][y]
        res.append(cur_min)
    return res


grid = [[int(x) for x in input().split()] for _ in range(int(input("Enter number of rows: ")))]

k = int(input("Enter number of iterations: "))

result = minPath(grid, k)

print(result)