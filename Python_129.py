n = int(input("Enter the number of rows: "))
m = int(input("Enter the number of columns: "))
k = int(input("Enter the value of k: "))

grid = [[0 for _ in range(m)] for _ in range(n)]
for i in range(n):
    for j in range(m):
        grid[i][j] = int(input(f"Enter {i*10+j+1}th element of grid: "))

print(minPath(grid, k))