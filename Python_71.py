```
import math

def triangle_area():
    a = float(input("Enter side A of triangle: "))
    b = float(input("Enter side B of triangle: "))
    c = float(input("Enter side C of triangle: "))

    if math.isclose(a + b, c) and math.isclose(a + c, b) and math.isclose(b + c, a):
        s = (a + b + c) / 2
        return round((math.sqrt(s * (s - a) * (s - b) * (s - c))), 2)
    else:
        return -1

print(triangle_area())