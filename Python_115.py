```Python
n = int(input("Enter the number of rows: ")) or -1
m = int(input("Enter the number of columns: ")) or -1

while n <= 0 or m <= 0:
    print("Invalid input! Please enter positive integers.")
    n = int(input("Enter the number of rows: ")) or -1
    m = int(input("Enter the number of columns: ")) or -1

row_values = list(map(int, input(f"Enter {n} row values separated by space: ").split()))
column_values = list(map(int, input(f"Enter {m} column values separated by space: ").split()))

print(max_water(n, m))