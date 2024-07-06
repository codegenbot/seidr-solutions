```
def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b = -sum(x for x in xs[:-1])
    c = sum(x * (i - 1) for i, x in enumerate(xs[:-1], 2))
    d = -sum(x * math.factorial(i - 1) for i, x in enumerate(xs[:-1], 2))

    x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    return round(x, 2)

xs = [int(i) for i in input("Enter coefficients (space separated): ").split()]
try:
    print(find_zero(xs))
except ValueError as e:
    print(e)