```
def find_zero(xs):
    if len(xs) != 2:
        return "Error: xs must have exactly 2 coefficients"
    elif len(xs) % 2 != 0:
        return "Error: xs must have an even number of coefficients"
    else:
        max_coeff = max(abs(x) for x in xs)
        if abs(xs[0]) == max_coeff:
            return -xs[1] / (2 * xs[0])
        else:
            return None