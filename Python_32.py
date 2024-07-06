import math


def find_zero(a, b, c):
    d = math.sqrt(b**2 - 4 * a * c)
    x1 = (-b + d) / (2 * a)
    x2 = (-b - d) / (2 * a)
    return round(min(x1, x2), 2)


if __name__ == "__main__":
    print("Enter a: ")
    a = float(input())
    print("Enter b: ")
    b = float(input())
    print("Enter c: ")
    c = float(input())
    result = find_zero(a, b, c)
    print(f"Zero is approximately {result}")