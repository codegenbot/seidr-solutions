n = int(input("Enter number of rows: "))
m = int(input("Enter number of columns: "))

grid = [
    [int(input(f"Enter element at {i},{j} (0/1): ")) for j in range(m)]
    for i in range(n)
]