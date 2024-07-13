Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    largest_coeff_index = max(range(n), key=lambda i: abs(xs[i]))
    x = -xs[largest_coeff_index] / xs[n-1]
    return round(x, 2)