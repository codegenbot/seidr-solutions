Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "List xs must have even number of coefficients"
    a, b = 0, float('-inf')
    for i in range(n // 2):
        c = -xs[i*2] / (xs[(i*2)+1])
        if abs(c) > abs(b):
            b = c
    return round(-b, 2)