Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff = max(abs(x) for x in xs)
    return -max_coeff / (sum([coeff * i for i, coeff in enumerate(xs)]))