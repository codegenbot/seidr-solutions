def max_fill(grid, capacity):
    total_water = sum(min(c, capacity) for row in grid for c in row)
    return math.ceil(total_water / capacity)

if __name__ == "__main__":
    while True:
        try:
            n = int(input("Enter number of rows: "))
            break
        except ValueError:
            print("Invalid input. Please enter a positive integer.")
    
    while True:
        try:
            m = int(input("Enter number of columns: "))
            break
        except ValueError:
            print("Invalid input. Please enter a positive integer.")
    
    grid = []
    for i in range(n):
        row_values = input(f"Enter {m} values for row {i+1}: ").split()
        grid.append([int(x) for x in row_values if x])
    capacity = int(input("Enter the capacity: "))
    print(max_fill(grid, capacity))