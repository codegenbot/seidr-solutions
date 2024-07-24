Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have an even number of coefficients")
    if max(abs(x) for x in xs) == 0:
        raise ValueError("xs must have at least one non-zero coefficient")

    a, b = divmod(sum(-x for x in xs), len(xs))
    return round(b / (2 * a), 2)