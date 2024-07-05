def find_zero(xs: list):
    def f(x):
        return poly(xs, x)

    def f_prime(x):
        h = 1e-5
        return (f(x + h) - f(x)) / h

    guess = 1.0
    for _ in range(1000):
        guess = guess - f(guess) / f_prime(guess)
        if abs(f(guess)) < 1e-7:
            return guess

    return None