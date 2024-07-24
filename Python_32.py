Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    largest_coeff = max(abs(x) for x in xs)
    if largest_coeff == xs[0]:
        return -xs[0] / xs[1]
    elif largest_coeff == xs[-1]:
        a, b = xs[:-1], [0] + xs[1:-1]
        return round(poly(a, -b[1]) / (2 * poly(b, 1)), 2)
    else:
        raise ValueError("xs must have largest non-zero coefficient at the end")