Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("List of coefficients must have an even number of elements")
    a = xs[-1]
    b = sum(c for i, c in enumerate(xs) if i % 2 == 1)
    return -b / (2 * a)