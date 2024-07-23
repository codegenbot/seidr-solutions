```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")

    a = xs[0]
    b = xs[1]
    c = sum(x for x in xs[2:])  # constant term and any higher degree terms
    d = round(-b / (2 * a), 10)  # solve the quadratic formula

    return d