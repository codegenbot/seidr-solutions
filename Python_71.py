```
import math


def sum_of_squares(n):
    result = 0
    for i in range(1, int(n) + 1):
        result += i**2
    return result


def check(area):
    sqrt = int(math.sqrt(area))
    if sqrt * sqrt == area:
        print("The area of the triangle is a perfect square.")
    else:
        print("The area of the triangle is not a perfect square.")


while True:
    while True:
        try:
            n = float(input("Enter a positive integer: "))
            if n > 0:
                break
            else:
                print("Please enter a positive integer.")
        except ValueError:
            print("Invalid input. Please enter a number.")
    base = int(n)
    
while True:
    while True:
        try:
            height = float(input("Enter the height of the triangle: "))
            if height > 0:
                break
            else:
                print("Please enter a positive value for the height.")
        except ValueError:
            print("Invalid input. Please enter a number.")
    base_height = (base * height) / 2

check(base_height)
print("The area of the triangle is: ", base_height)
sum_of_squares(int(base_height))