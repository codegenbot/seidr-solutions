def max_fill(grid, capacity):
    total_water = sum(min(c, capacity) for row in grid for c in row)
    return math.ceil(total_water / capacity)

if __name__ == "__main__":
    n = int(input("Enter number of rows: "))
    m = int(input("Enter number of columns: "))
    grid = []
    for i in range(n):
        row_values = input(f"Enter {m} values for row {i+1}: ").split()
        grid.append([int(x) for x in row_values if x])
    capacity = int(input("Enter the capacity: "))
    print(max_fill(grid, capacity))