Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_nonzero_coeff = max(abs(coeff) for coeff in xs)
    max_index = [i for i, coeff in enumerate(xs) if abs(coeff) == max_nonzero_coeff][0]
    return -xs[max_index] / xs[max_index + 1]