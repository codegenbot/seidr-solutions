```
def minPath():
    n = int(input("Enter number of rows in grid: "))
    m = int(input("Enter number of columns in grid: "))
    k = int(input("Enter number of paths to calculate: "))

    grid = []
    for _ in range(n):
        row = list(map(int, input("Enter row values separated by space: ").split()))
        grid.append(row)

    res = []
    for _ in range(k):
        queue = deque([(i, j, i * n + j) for i in range(n) for j in range(m)])
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

print(minPath())