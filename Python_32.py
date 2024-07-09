def find_zero(xs: list):
    n = len(xs) - 1
    if n < 2 or n % 2 != 0 or xs[n - 1] == 0:
        raise ValueError("Invalid input")
    return -xs[0] / xs[n]