```
def find_zero(xs):
    if len(xs) % 2 != 0:
        return "Error: xs must have an even number of coefficients"
    max_coeff = max(abs(x) for x in xs)
    return -xs[1] / (2 * xs[0]) if max_coeff == abs(xs[0]) else 1