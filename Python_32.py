try:
    xs = [int(x) for x in input("Enter the coefficients (space separated): ").split()]
except ValueError as e:
    print(f"Error: {e}")
    exit()
import math
def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if len(xs) > 2 else 0
    d = xs[3] if len(xs) > 3 else 0
    x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    return round(x, 2)

print(find_zero(xs))