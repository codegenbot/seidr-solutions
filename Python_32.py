```
"""
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = 0
    for i in range(1, len(xs)):
        coeff = xs[i]
        b += -coeff / math.factorial(i)
    return -b / a
"""