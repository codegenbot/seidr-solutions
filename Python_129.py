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


grid = []
k = 0

while True:
    try:
        n = int(input("Enter the size of the grid: "))
        for i in range(n):
            row = list(map(int, input(f"Enter the {i+1}th row: ").split()))
            grid.append(row)
        k = int(input("Enter the number of operations: "))
    except ValueError:
        print("Invalid Input. Please try again.")
    else:
        break

print(minPath(grid, k))