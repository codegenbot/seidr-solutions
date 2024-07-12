Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        raise ValueError("xs must have even number of coefficients")
    largest_coeff = max(i for i in xs if i != 0)
    return -largest_coeff / xs[-1]