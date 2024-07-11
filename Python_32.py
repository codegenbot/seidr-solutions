def find_zero(xs):
    if len(xs) != 2:
        return "Error: xs must have exactly 2 coefficients"
    try:
        return -xs[1] / (2 * xs[0])
    except ZeroDivisionError:
        return "Error: Division by zero is not allowed"