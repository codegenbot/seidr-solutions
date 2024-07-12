Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    b = -sum(x for x in xs[:-1])
    c = sum((i * x for i, x in enumerate(xs[:-2], start=1)))
    d = -(sum((i ** 2 * x for i, x in enumerate(xs[:-3], start=1)), default=0))
    return (-b + math.sqrt(b**2 - 4*a*d)) / (2*a)