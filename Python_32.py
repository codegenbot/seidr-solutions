def find_zero(xs: list):
    n = len(xs)
    if n % 2 == 1:
        return "Error: List xs must have an even number of coefficients"
    x0 = -xs[1] / (2 * xs[0])
    return round(x0, 2)