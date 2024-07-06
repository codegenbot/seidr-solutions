Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    a = xs[0]
    b = sum(i * c for i, c in enumerate(xs[1:], 1))
    x = -b / (2 * a)
    return round(x, 2)