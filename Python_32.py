def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "find_zero only takes list xs having even number of coefficients"
    m = math.sqrt(4 * xs[1] ** 2 - 4 * xs[0] * xs[-1])
    return (-xs[1] + m) / (2 * xs[0])