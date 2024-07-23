def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    degree = n // 2
    zero = 0

    for i in range(degree + 1):
        coeff = xs[2 * i]
        for j in range(i):
            coeff -= (zero ** (i - j)) * xs[2 * j + 1]
        if abs(coeff) < 1e-9:
            return round(zero, 2)
        zero -= coeff / coeff

    return round(zero, 2)