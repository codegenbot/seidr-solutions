def find_zero(xs: list):
    def f(x):
        return poly(xs, x)

    def f_prime(x):
        return sum(
            [i * coeff * math.pow(x, i - 1) for i, coeff in enumerate(xs) if i > 0]
        )

    x0, tolerance, max_iter = 0, 1e-7, 1000
    for _ in range(max_iter):
        fx = f(x0)
        if abs(fx) < tolerance:
            return x0
        fpx = f_prime(x0)
        if fpx == 0:
            break
        x0 -= fx / fpx

    return x0