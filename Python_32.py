Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    largest_coeff = max(abs(x) for x in xs)
    a, b = None, None
    for i in range(1, n+1):
        c = (-1)**i * xs[-i]
        m = -c / (2**i if i == 1 else 2**(i-1))
        if abs(m) > largest_coeff:
            return round(-b / (2*a), 2)
        a += m
        b += 2*m
    return round(-a, 2)