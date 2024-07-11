```
n = int(input("Enter the number of rows: "))
m = int(input("Enter the number of columns: "))

while not (isinstance(n, int) and isinstance(m, int) and n > 0 and m > 0):
    print("Invalid input! Please enter positive integers.")
    try:
        n = int(input("Enter the number of rows: "))
        m = int(input("Enter the number of columns: "))
    except ValueError:
        pass

print(max_water(n, m))