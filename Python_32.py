Here is the completed code:

def find_zero(xs: list):
    assert len(xs) % 2 == 0, "List xs must have even number of coefficients"
    x = -xs[1] / xs[3]
    return round(x, 2) if abs(x) > 1e-9 else 0