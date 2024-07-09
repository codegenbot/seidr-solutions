```
def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff_idx = None
    max_coeff = 0
    for i, x in enumerate(xs):
        if x is not None and abs(x) > abs(max_coeff):
            max_coeff_idx = i
            max_coeff = x
    return -max_coeff / xs[max_coeff_idx+1] if max_coeff_idx + 1 < n else float('inf')