Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    a = xs[-1]
    b = -xs[0] / a
    return round(b, 2)