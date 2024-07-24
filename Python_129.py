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
    while True:
        try:
            m = int(input("Enter number of rows: "))
            if m <= 0:
                print("Number of rows must be greater than zero. Please enter a valid input.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    while True:
        try:
            n = int(input("Enter number of columns: "))
            if n <= 0:
                print("Number of columns must be greater than zero. Please enter a valid input.")
                continue
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    grid = []
    for i in range(m):
        while True:
            try:
                row = list(map(int, input(f"Enter the numbers in a row separated by space: ").split()))
                if len(row) != n:
                    print("Number of elements must match the number of columns. Please enter a valid input.")
                    continue
                grid.append(row)
                break
            except ValueError:
                print("Invalid input. Please enter integers separated by spaces.")

    print(minPathSum(list(zip(*grid))))


main()