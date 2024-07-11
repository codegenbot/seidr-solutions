```
def find_zero(xs: list):
    assert len(xs) % 2 == 0, "xs must have even number of coefficients"
    a = xs[0]
    b = xs[1]
    c = xs[2] if len(xs) > 2 else 0
    zero_point = (-b + (b**2 - 4*a*c)**0.5) / (2 * a)
    return zero_point