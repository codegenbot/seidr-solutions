Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if max(abs(x) for x in xs) < 1e-6:
        return None
    a, b = 0, float('inf')
    while abs(b - a) > 1e-6:
        c = (a + b) / 2
        f_a, f_b, f_c = poly(xs, a), poly(xs, b), poly(xs, c)
        if f_c == 0:
            return round(c, 12)
        elif f_a * f_c < 0:
            b = c
        else:
            a = c
    return round((a + b) / 2, 12)