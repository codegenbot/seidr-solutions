n = int(input("Enter number of rows: "))
m = int(input("Enter number of columns: "))

grid = [[int(input(f"Enter element at {i},{j} (0/1): ")) for j in range(m)] for i in range(n)]

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
                if cell < cur_min:
                    cur_min = cell
        res.append(cur_min)
    return res