Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    leading_coefficient = xs[-1]
    x = -leading_coefficient
    while abs(poly(xs, x)) > 0.00001:
        x -= poly(xs, x) / (leading_coefficient * math.pow(x, n-1))
    return round(x, 2)