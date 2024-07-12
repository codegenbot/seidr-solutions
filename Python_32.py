Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if max(abs(x) for x in xs) == 0:
        raise ValueError("xs must have largest non-zero coefficient")

    n = (len(xs) - 1) // 2
    return (-xs[1] / xs[0]) ** ((n + 1) / n)