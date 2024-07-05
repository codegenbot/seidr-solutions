def find_zero(xs: list):
    def derivative(xs):
        return [i * xs[i] for i in range(1, len(xs))]

    x = 0
    tolerance = 1e-7
    max_iterations = 1000

    for _ in range(max_iterations):
        y = poly(xs, x)
        if abs(y) < tolerance:
            return x
        dy = poly(derivative(xs), x)
        if dy == 0:
            break
        x -= y / dy

    return x