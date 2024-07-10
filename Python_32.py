def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Input should have even number of coefficients")
    a = xs[0]
    b = xs[1]
    for i in range(2, len(xs)):
        a, b = (b, a + b * (-xs[i]) / xs[i - 1])
    return -b / a