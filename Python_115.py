```
def max_fill(grid, capacity):
    total_water = sum(min(c, capacity) for row in grid for c in row)
    return math.ceil(total_water / capacity)

if __name__ == "__main__":
    try:
        n = int(input("Enter number of rows: "))
    except ValueError:
        print("Invalid input. Please enter an integer.")
        exit()
    try:
        m = int(input("Enter number of columns: "))
    except ValueError:
        print("Invalid input. Please enter an integer.")
        exit()
    grid = [[int(x) for x in input(f"Enter {m} values for row {i+1}: ").split() if x] for i in range(n)]
    try:
        capacity = int(input("Enter the capacity: "))
    except ValueError:
        print("Invalid input. Please enter an integer.")
        exit()
    print(max_fill(grid, capacity))