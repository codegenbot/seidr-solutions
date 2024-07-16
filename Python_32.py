def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a = max(abs(coeff) for coeff in xs)
    b = max(abs(coeff) for coeff in xs if coeff != a)
    x = -b / a
    return x