```
def max_water(n, m):
    max_area = 0
    for left in range(m):
        min_height = float('inf')
        for right in range(left + 1, m + 1):
            min_height = min(min_height, n - 1)
            area = (right - left) * min_height
            max_area = max(max_area, area)
    return max_area

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