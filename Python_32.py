import math


def find_zero(a, b, c):
    d = math.sqrt(b**2 - 4 * a * c)
    x1 = (-b + d) / (2 * a)
    x2 = (-b - d) / (2 * a)
    return round(min(x1, x2), 2)


if __name__ == "__main__":
    print("Enter a: ")
    a = float(input())

    if a == 0:
        while True:
            print("Enter non-zero value for 'b': ")
            b = float(input())
            print("Enter non-zero value for 'c': ")
            c = float(input())

            if b**2 - 4 * a * c >= 0 and b != 0 and c != 0:
                break
        result = find_zero(a, b, c)
        print(f"Zero is approximately {result}")
    elif b**2 - 4 * a * c < 0:
        print(
            "The program did not receive the expected input. The discriminant must be non-negative."
        )
    else:
        while True:
            print("Enter c: ")
            c = float(input())

            if b**2 - 4 * a * c >= 0:
                break
        result = find_zero(a, b, c)
        print(f"Zero is approximately {result}")