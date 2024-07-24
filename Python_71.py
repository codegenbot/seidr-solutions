import math

def sum_of_squares(n):
    result = 0
    for i in range(1, n + 1):
        result += i**2
    return result

def check(area):
    sqrt = int(math.sqrt(area))
    if sqrt*sqrt == area:
        print("The area of the triangle is a perfect square.")
    else:
        print("The area of the triangle is not a perfect square.")

while True:
    try:
        base = float(input("Enter the base of the triangle: "))
        height = float(input("Enter the height of the triangle: "))

        if base > 0 and height > 0:
            break
        else:
            print("Please enter positive values for both base and height.")
    except ValueError:
        print("Invalid input. Please enter numbers.")

triangle_area = (base*height)/2

check(triangle_area)