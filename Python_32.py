```
def find_zero(xs):
    if len(xs) != 2:
        return "Error: xs must have exactly 2 coefficients"
    if not all(isinstance(x, (int, float)) for x in xs):
        return "Error: xs must contain only numbers"
    max_coeff = abs(max(xs))
    min_coeff = abs(min(xs))
    if max_coeff == min_coeff:
        return -xs[1] / (2 * xs[0])
    else:
        return None