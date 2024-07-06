import math


def find_zero(a, b, c):
    d = b**2 - 4 * a * c
    if d <= 0:
        if a == 0 and (b != 0 or c != 0):
            return "The quadratic equation has no solutions."
        else:
            return (
                "There are no real solutions for the given values of 'a', 'b' and 'c'."
            )
    x1 = (-b + math.sqrt(d)) / (2 * a)
    x2 = (-b - math.sqrt(d)) / (2 * a)
    return round(min(x1, x2), 2)


if __name__ == "__main__":
    print("Enter a: ")
    a = float(input())
    print("Enter b: ")
    b = float(input())
    print("Enter c: ")
    c = float(input())

    if a == 0 and (b != 0 or c != 0):
        print(
            "The program did not receive the expected input. 'a' cannot be zero when 'b' or 'c' is non-zero."
        )
    else:
        result = find_zero(a, b, c)
        print(f"Zero is approximately {result}")