def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    max_coeff = max(xs, key=abs)
    for i in range(len(xs)):
        if xs[i] == max_coeff:
            break
    a = xs[i]
    b = xs[i - 1]
    return -b / a