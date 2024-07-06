```
import math
import re

def find_zero(xs):
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
    while True:
        xs = input("Enter coefficients (a, b, c[, d]): ")
        if re.match(r"[-+]?[0-9]*\.?[0-9]+\s+[-+]?[0-9]*\.?[0-9]+(?:\s+[-+]?[0-9]*\.?[0-9]+){0,2}", xs):
            try:
                xs = list(map(float, re.split(r"\s|,", xs)))
                result = find_zero(xs)
                print(f"Zero is approximately {result}")
            except ValueError as e:
                print(f"Error: {e}")
            break
        else:
            print("Invalid input. Please enter three or four numbers separated by spaces or commas.")