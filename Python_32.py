Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None  # or raise ValueError("xs must have even number of coefficients")
    n = (len(xs) - 1) // 2
    x = -sum([coeff for i, coeff in enumerate(xs[:n]) if i % 2 == 1]) / sum([coeff for i, coeff in enumerate(xs[:n]) if i % 2 == 0])
    return round(x, 10)