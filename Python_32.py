```
import math

def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if max(abs(x) for x in xs) == 0:
        raise ValueError("xs must have largest non zero coefficient")

    a = xs[0]
    b = sum(coeff * i for i, coeff in enumerate(xs)[1:])
    c = -sum(sum(map(lambda i: [j * coeff for j, coeff in enumerate(i)], [(i**2) for i in range(len(xs))])).pop() for i, coeff in enumerate(xs))[1:]

    discr = b**2 - 4 * a * c
    if discr < 0:
        return complex((-b + math.sqrt(-discr)) / (2 * a))
    elif discr == 0:
        return (-b) / (2 * a)
    else:
        root1 = (-b + math.sqrt(discr)) / (2 * a)
        root2 = (-b - math.sqrt(discr)) / (2 * a)
        return min(root1, root2) if abs(root1) < abs(root2) else max(root1, root2)