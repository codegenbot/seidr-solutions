print("Enter the number of rows: ")
n = int(input()) or -1
print("Enter the number of columns: ")
m = int(input()) or -1

while n <= 0 or m <= 0:
    print("Invalid input! Please enter positive integers.")
    try:
        print("Enter the number of rows: ")
        n = int(input())
        print("Enter the number of columns: ")
        m = int(input())
    except ValueError:
        pass

print(max_water(n, m))