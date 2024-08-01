def find_zero(xs: list):
    assert len(xs) > 1, "Please provide a list of coefficients of a polynomial with degree >= 1."
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a