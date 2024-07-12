Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff_idx = xs.index(max(i for i in xs if i != 0))
    x = -xs[max_coeff_idx-1] / xs[max_coeff_idx]
    return round(x, 10)