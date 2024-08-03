```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff = abs(max(xs))
    return -max_coeff / xs[-1]