Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    max_coeff = max(abs(x) for x in xs)
    if max_coeff == xs[0]:
        return -xs[0] / xs[1]
    else:
        return (max_coeff * math.sqrt(max_coeff**2 + 4 * abs(xs[0]) * xs[-1]))/(2*abs(xs[0]))
