Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Input must have an even number of coefficients")
    max_coeff = abs(max(xs))
    x = -xs[1] / (2 * xs[0])
    return round(x, 10)