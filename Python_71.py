```
import math

def triangle_area(a, b, c):
    if a + b > c and a + c > b and b + c > a:
        s = (a + b + c) / 2
        return round(math.sqrt(s*(s-a)*(s-b)*(s-c)), 2)
    else:
        return -1

side1 = float(input("Enter side 1: "))
side2 = float(input("Enter side 2: "))
side3 = float(input("Enter side 3: "))

area = triangle_area(side1, side2, side3)

print(f"The area of the triangle is {area} square units.")