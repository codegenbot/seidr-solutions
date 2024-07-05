def find_zero(xs: list):
    def f(x):
        return poly(xs, x)

    def f_prime(x):
        return sum(
            [i * coeff * math.pow(x, i - 1) for i, coeff in enumerate(xs) if i != 0]
        )

    x = 0
    for _ in range(1000):
        fx = f(x)
        if abs(fx) < 1e-7:
            return x
        fpx = f_prime(x)
        if fpx == 0:
            break
        x = x - fx / fpx

    raise ValueError("No zero found")