Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("List xs must have an even number of coefficients")
    largest_coeff_idx = abs(xs).index(max(abs(xs)))
    x = -xs[largest_coeff_idx] / xs[largest_coeff_idx + 1]
    return round(x, 2)