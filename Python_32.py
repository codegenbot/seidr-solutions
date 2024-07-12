Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    largest_coeff = max(i for i in xs if i)
    return -largest_coeff / xs[-1]