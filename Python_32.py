Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if max(i for i in xs if i != 0) < 1e-6:
        raise ValueError("xs must have largest non zero coefficient as it guarantees a solution")

    return -sum([coeff / i for i, coeff in enumerate(xs)[1:]], default=0)