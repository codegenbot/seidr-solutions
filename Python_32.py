Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs should have even number of coefficients"
    max_coeff_index = xs.index(max(filter(None, xs)))
    return (-1) ** (max_coeff_index // 2) * math.pow(n / (2 * max_coeff_index), 1 if max_coeff_index % 2 else -1)