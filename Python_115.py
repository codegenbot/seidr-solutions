```
def max_fill():
    rows = int(input("Enter number of rows: "))
    cols = int(input("Enter number of columns: "))
    grid = [[int(input(f"Enter value for cell ({i+1}, {j+1}): ")) for j in range(cols)] for i in range(rows)]
    capacity = int(input("Enter capacity: "))
    print(max_fill(grid, capacity))