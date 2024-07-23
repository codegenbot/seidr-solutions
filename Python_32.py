```
import math
def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if max(abs(x) for x in xs) == 0:
        raise ValueError("xs must have largest non zero coefficient")

    a = xs[0]
    b = sum(coeff * i for i, coeff in enumerate(xs)[1:])
    c = -sum(sum(map(lambda i: [j * coeff for j, coeff in enumerate(i)], ((i**2) for i in range(len(xs)))).pop() for i, coeff in enumerate(xs))[1:]

    disc_root = math.sqrt(b**2 - 4 * a * c)
    
    if disc_root % 1 == 0 and disc_root >= 0:
        return (-b + disc_root) / (2 * a)
    elif disc_root % 1 != 0:
        raise ValueError("Quadratic equation has non-real or complex roots.")
    else:
        raise ValueError("Quadratic equation has no real roots.")