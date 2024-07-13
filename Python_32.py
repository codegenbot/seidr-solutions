```
def find_zero():
    xs = list(map(float, input("Enter coefficients (space separated): ").split()))
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    x = -xs[1] / xs[3]
    return round(x, 2)