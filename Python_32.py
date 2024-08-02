Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    max_coeff_index = xs.index(max([abs(i) for i in xs]))
    if max_coeff_index == 0:
        return -xs[1] / xs[0]
    else:
        return (-xs[max_coeff_index-1]) ** (1.0/(max_coeff_index))