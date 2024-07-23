def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0
    degree = n // 2
    coefficients = [0] * (degree + 1)

    for i in range(0, degree + 1):
        if i < len(xs):
            coefficients[degree - i] = xs[i]

    root = 0.0
    for i in range(degree, -1, -1):
        root += (-coefficients[i] / pow(coefficients[0], i)) * (1 if i % 2 == 0 else -1)

    return round(root, 2)