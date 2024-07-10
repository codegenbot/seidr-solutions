def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return "Error: Odd number of coefficients"
    max_coeff = max(xs, key=abs)
    if max_coeff == 0:
        return "Error: No non-zero coefficients"
    if xs[-1] == 0:
        return 0.0
    a = xs[-1]
    b = sum([xs[i] * (i + 1) for i in range(n - 1)])
    return -b / a