def main():
    grid = []
    m = int(input("Enter number of rows: "))
    n = int(input("Enter number of columns: "))

    for i in range(m):
        row = list(
            map(int, input(f"Enter the numbers in a row separated by space: ").split())
        )
        grid.append(row)

    minPath = float("inf")

    print(minPath)