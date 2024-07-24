```
def minPathSum(grid):
    m = len(grid)
    n = len(grid[0])

    for i in range(1, m):
        grid[i][0] += grid[i - 1][0]
    for j in range(1, n):
        grid[0][j] += grid[0][j - 1]

    for i in range(1, m):
        for j in range(1, n):
            grid[i][j] += min(grid[i - 1][j], grid[i][j - 1])

    return grid[m - 1][n - 1]


def main():
    m = int(input("Enter number of rows: "))
    n = int(input("Enter number of columns: "))

    grid = []
    for i in range(m):
        row = list(map(int, input(f"Enter the numbers in a row separated by space: ").split()))
        grid.append(row)

    print(minPathSum(grid))
main()