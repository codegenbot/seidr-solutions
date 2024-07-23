```Python
import math

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if max(abs(x) for x in xs) == 0:
        raise ValueError("xs must have largest non zero coefficient")

    a = xs[0]
    b = sum(coeff * i for i, coeff in enumerate(xs)[1:])
    c = -sum(
        sum(
            map(
                lambda i: [j * coeff for j, coeff in enumerate(i)],
                ([(i**2) for i in range(len(xs))]),
            )
        ).pop()
        for i, coeff in enumerate(xs)
    )[1:]

    if a != 0:
        return (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)