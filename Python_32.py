Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff = max(abs(x) for x in xs)
    a = max_coeff
    b = -sum(c for c in xs)
    return round(-b / (2 * a), 2)