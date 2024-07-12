Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_coeff = max(abs(x) for x in xs)
    if max_coeff == 0:
        return None
    return -sum([coeff / i for i, coeff in enumerate(xs) if i > 1]) / sum([coeff for i, coeff in enumerate(xs) if i % 2 == 0])