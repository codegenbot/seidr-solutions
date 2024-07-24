```
def sum_of_squares(n):
    result = 0
    for i in range(1, n + 1):
        result += i**2
    return result

base = float(input("Enter the base of the triangle: "))
height = float(input("Enter the height of the triangle: "))

triangle_area = (base*height)/2

print("Valid input" if 0 < triangle_area <= (base**2)/4 else "Invalid input")