```
def minPathSum(grid):
    m = len(grid)
    n = len(grid[0])
    
    for i in range(m):
        for j in range(n):
            if i == 0 and j == 0:
                continue
            elif i == 0:
                grid[i][j] += grid[i][j-1]
            elif j == 0:
                grid[i][j] += grid[i-1][j]
            else:
                grid[i][j] += min(grid[i-1][j], grid[i][j-1])

    return grid[0][n-1]

def main():
    m = int(input("Enter number of rows: "))
    n = int(input("Enter number of columns: "))

    grid = []
    for i in range(m):
        row = list(
            map(int, input(f"Enter the numbers in a row separated by space: ").split())
        )
        grid.append(row)

    minPath = float("inf")
    
    try:
        minPath = minPathSum(grid)
    except ValueError as e:
        print(f"Error: {e}")
    finally:
        if minPath < float("inf"):
            print(f"Minimum path sum: {minPath}")
        else:
            print("No possible path")