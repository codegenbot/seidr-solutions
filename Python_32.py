Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    x = -sum(x for x in xs[:-1] if x) / sum((i+1)*x for i, x in enumerate(xs[-1::-2]))
    return round(x, 2)