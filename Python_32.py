Here is the completed code:

def find_zero(xs: list):
    return round(-xs[0] / xs[-1], 10) if len(xs) > 2 else -xs[0] / xs[1]