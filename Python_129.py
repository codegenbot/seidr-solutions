```
def minPath(grid, k):
    N = len(grid)
    
    if N == 0:
        return []
    
    if not all(len(row) == N for row in grid):
        return "Grid is not a square."
        
    if not all(isinstance(cell, int) for row in grid for cell in row):
        return "Grid contains non-integer elements."
        
    visited = [[False]*N for _ in range(N)]
    queue = [(0, 0, [grid[0][0]])]
    res = []
    
    while queue:
        x, y, path = queue.pop(0)
        
        if len(path) == k + 1:
            if not res or tuple(sorted(path)) < tuple(sorted(res)):
                res = list(path[:-1])
            continue
        
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                visited[nx][ny] = True
                queue.append((nx, ny, path + [grid[nx][ny]]))
    
    return res

N = int(input("Enter number of rows (columns will be same): "))
while not isinstance(N, int):
    print("Invalid input. Please enter an integer.")
    N = int(input("Enter number of rows (columns will be same): "))

if len(grid := [[int(input(f"Enter element for row {i}, column {j}: ")) for j in range(N)] for i in range(N)]) != N:
    print("Grid is not a square.")
else:
    k = int(input("Enter k value: "))
    
    while not isinstance(k, int):
        print("Invalid input. Please enter an integer.")
        k = int(input("Enter k value: "))

    print(minPath(grid, k))