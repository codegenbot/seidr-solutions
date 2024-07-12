Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    n = (len(xs) - 1) // 2
    x = -xs[n-1] / xs[-1]
    return round(x, 10)