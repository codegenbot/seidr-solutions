def find_zero(xs: list):
    def f(x):
        return poly(xs, x)

    def f_prime(xs, x):
        return sum(
            [i * coeff * math.pow(x, i - 1) for i, coeff in enumerate(xs) if i != 0]
        )

    x = 0  # initial guess
    for _ in range(100):  # maximum 100 iterations
        fx = f(x)
        if abs(fx) < 1e-7:  # tolerance for zero
            return x
        fpx = f_prime(xs, x)
        if fpx == 0:  # avoid division by zero
            break
        x -= fx / fpx
    return x