import math


def find_zero():
    a = float(input())
    b = float(input())
    c = float(input())
    d = float(input())
    return round((-b + math.sqrt(b * b - 4 * a * c)) / (2 * a), 2)


result = find_zero()
print(result)