def find_zero(xs: list):
    largest_coeff = max(xs)
    degree = len(xs) - 1
    x = -largest_coeff / degree
    return x