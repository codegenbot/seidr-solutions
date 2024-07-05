def find_zero(xs: list):
    def f(x):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

    def derivative(xs):
        return [i * xs[i] for i in range(1, len(xs))]

    guess = 1.0
    tol = 1e-7
    max_iter = 1000

    for _ in range(max_iter):
        y = f(guess)
        if abs(y) < tol:
            return guess
        dy = sum([coeff * math.pow(guess, i) for i, coeff in enumerate(derivative(xs))])
        if dy == 0:
            break
        guess -= y / dy

    return guess