Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    coefficient_sum = sum([coeff for i, coeff in enumerate(xs) if i % 2 == 1])
    return -coefficient_sum / xs[0]