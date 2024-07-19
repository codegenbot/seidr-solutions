def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have even number of coefficients")
    degree = len(xs) - 1
    largest_coeff = max(xs, key=abs)
    candidates = [i for i, coeff in enumerate(xs) if coeff == largest_coeff]
    x = -largest_coeff / candidates[0]
    return x