import math


def triangle_area():
    a = float(input("Enter the first side: "))
    b = float(input("Enter the second side: "))
    c = float(input("Enter the third side: "))

    if a + b > c and a + c > b and b + c > a:
        s = (a + b + c) / 2
        return round(math.sqrt(s * (s - a) * (s - b) * (s - c)), 2)
    else:
        return -1


print(triangle_area())