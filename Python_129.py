```python
from collections import deque

def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    res = []

    for _ in range(k):
        queue = deque([(i, j, i * m + j) for i in range(n) for j in range(m)])
        visited = set()
        cur_min = float("inf")

        while queue:
            x, y, cell = queue.popleft()

            if (x, y, cell) not in visited:
                visited.add((x, y, cell))
                cur_min = min(cur_min, cell)

        res.append(cur_min)

    return res

n = int(input("Enter the number of rows: "))
m = int(input("Enter the number of columns: "))
k = int(input("Enter the value of k: "))

grid = [[0 for _ in range(m)] for _ in range(n)]
for i in range(n):
    for j in range(m):
        grid[i][j] = int(input(f"Enter {i*10+j+1}th element of grid: "))

print(minPath(grid, k))