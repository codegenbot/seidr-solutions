Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    largest_coeff = max(abs(i) for i in xs)
    return -xs[0] / (n // 2 * xs[-1])