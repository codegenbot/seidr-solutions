def find_zero(p: list):
    n = len(p)
    if n % 2 != 0:
        raise ValueError("p must have even number of coefficients")
    zero_x = (-p[1] + (p[-1] ** (n // 2))) / (p[-1] * (p[1] ** ((n - 2) // 2)))
    return round(zero_x, 5)