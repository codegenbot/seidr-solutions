def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return "Error: Coefficients list must have even length"
    
    n = len(xs) - 1
    a = xs[0]
    b = xs[n]
    x = -a / b
    return x