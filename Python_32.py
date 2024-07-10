def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have an even number of coefficients.")

    a = max(xs, key=lambda x: abs(x))
    for i in range(len(xs)):
        if xs[i] == a:
            xs[0], xs[i] = xs[i], xs[0]

    def f(x):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

    x = 0.0
    while abs(f(x)) > 1e-9:
        slope = (f(x + 1e-9) - f(x)) / 1e-9
        x -= f(x) / slope

    return x