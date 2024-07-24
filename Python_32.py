def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")

    x_values = [x for x in xs[:-1]]
    degree_values = list(range(len(xs) - 1))

    a = xs[-1]
    b = sum(x for x in x_values)
    c = sum(x * y for x, y in zip(x_values, degree_values))
    d = sum(x * y**2 for x, y in zip(x_values, degree_values))

    if a == 0:
        return "a cannot be zero"
    if b == 0:
        b = -sum(x * y for x, y in zip(x_values, degree_values))
    root_part = (b**2 - 4 * a * (c - b / 3.0)) ** 0.5
    r1 = (-b + root_part) / (2 * a)
    r2 = (-b - root_part) / (2 * a)

    return str(min([r1, r2], key=lambda x: abs(x)))