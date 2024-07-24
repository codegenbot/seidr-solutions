import math


def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b = -sum([coeff for i, coeff in enumerate(xs) if i % 2 == 1])
    c = sum([coeff for i, coeff in enumerate(xs) if i % 4 == 3 and coeff != 0])
    d = -a
    x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    return round(x, 2)


if __name__ == "__main__":
    xs = list(map(float, input("Enter coefficients: ").split()))
    try:
        print(find_zero(xs))
    except ValueError as e:
        print(f"Error: {e}")