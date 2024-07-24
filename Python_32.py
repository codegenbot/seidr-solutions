Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    largest_coeff = abs(xs[0])
    for coeff in xs:
        if abs(coeff) > largest_coeff:
            largest_coeff = abs(coeff)
    return -largest_coeff