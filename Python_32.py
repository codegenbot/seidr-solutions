```
def find_zero(xs: list):
    if len(xs) < 3:
        raise ValueError("xs must have at least three coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2]

    x = (-b + (b**2 - 4*a*c)**0.5) / (2*a)
    return round(x, 10)