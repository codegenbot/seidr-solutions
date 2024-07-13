Here is the completed code:

def find_zero(xs: list):
    return round(-xs[1] / xs[0], 2) if len(xs) == 2 else None