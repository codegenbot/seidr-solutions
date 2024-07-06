import math


def find_zero(a, b, c):
    d = b**2 - 4 * a * c
    if d >= 0:
        x1 = (-b + math.sqrt(d)) / (2 * a)
        x2 = (-b - math.sqrt(d)) / (2 * a)
        return round(min(x1, x2), 2)
    else:
        return "No real solutions"


if __name__ == "__main__":
    print("Enter a: ")
    a = float(input())
    print("Enter b: ")
    b = float(input())
    print("Enter c: ")
    c = float(input())
    result = find_zero(a, b, c)
    print(f"Zero is approximately {result}")