Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_abs_coeff = abs(max(xs))
    if xs[0] == max_abs_coeff:
        return -1 / (float(xs[1]) * 2)
    elif xs[-1] == max_abs_coeff:
        return float(-1)