```
def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    degree = n // 2
    a = xs[::2]
    coefficients = [0] * (degree + 1)
    for i in range(degree + 1):
        if i < len(a):
            coefficients[degree - i] = a[i]

    root = coefficients[-1] / coefficients[0]
    return round(root, 2)