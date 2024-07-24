Here is the completed code:

def find_zero(xs: list):
    return round(-xs[0] / xs[-1], 2) if len(xs) > 1 else None