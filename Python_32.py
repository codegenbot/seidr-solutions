```
import math

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else 0
    d = xs[3] if n > 3 else 0
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(x, 2)

if __name__ == "__main__":
    xs = input("Enter coefficients (a, b, c[, d]): ")
    try:
        xs = list(map(float, xs.split()))
        result = find_zero(xs)
        print(f"Zero is approximately {result}")
    except ValueError as e:
        print(f"Error: {e}")