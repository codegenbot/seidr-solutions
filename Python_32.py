Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")

    n = len(xs) // 2
    return -sum([coeff / (i * i) for i, coeff in enumerate(xs[:n], start=1)])