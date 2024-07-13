```
import math

xs = [int(x) for x in input("Enter the coefficients (space separated): ").split()]

def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else 0
    d = xs[3] if n > 3 else 0
    x = (-b + math.sqrt(b**2 - 4 * a * (c-a*x))) / (2 * a)
    return round(x, 2)

while True:
    try:
        xs = [int(x) for x in input("Enter the coefficients (space separated): ").split()]
        if len(xs) > 4:
            print("You can only enter up to four coefficients. Please try again.")
        else:
            print(find_zero(xs))
    except ValueError as e:
        print(f"Error: {e}")
        exit()