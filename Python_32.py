Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")

    n = len(xs)
    a = xs[0]
    b = xs[1]

    if abs(a) > abs(b):
        return -b / (2 * b)

    for i in range(3, n + 1, 2):
        c = (-1) ** ((i - 1) // 2) * xs[i] / (2 * a)
        a = b
        b += c * b

    return -b / a