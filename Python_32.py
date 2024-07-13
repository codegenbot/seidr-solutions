Here is the completed Python code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    leading_coeff = xs[-1]
    x = -leading_coeff / xs[n//2] if leading_coeff * xs[n//2] > 0 else leading_coeff / xs[1]
    return round(x, 2)