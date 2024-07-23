```
def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    degree = (n // 2) - 1
    zero = xs[0]

    for i in range(degree + 1):
        coeff = xs[i]
        for j in range(i + 1):
            if j == 0:
                coeff -= xs[i + j] * zero ** i
            else:
                coeff -= xs[i + j] * zero ** (i - j)
        if abs(coeff) < 1e-9:
            return round(zero, 2)
        zero -= coeff / coeff

    return round(zero, 2)