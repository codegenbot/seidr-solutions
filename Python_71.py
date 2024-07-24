```
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
        n = int(input("Enter the sum of squares: "))

        if n > 0:
            break
        else:
            print("Please enter positive value.")
    except ValueError:
        print("Invalid input. Please enter a number.")

check(sum_of_squares(n))