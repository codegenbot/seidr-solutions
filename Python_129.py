```
N = int(input("Enter the number of rows in the grid: "))
M = int(input("Enter the number of columns in the grid: "))

grid = [[0 for _ in range(M)] for _ in range(N)]

for i in range(N):
    row = input(f"Enter row {i+1} (space-separated): ").split()
    for j in range(len(row)):
        grid[i][j] = int(row[j])

k = int(input("Enter the number of steps: "))

min_path = minPath(grid, k)
print(min_path)