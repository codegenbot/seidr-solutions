```
def find_zero(xs):
    total = sum(x for x in xs)
    if abs(total) < 1e-9:
        return 0
    zero = -total / sum(x**2 for x in xs)
    return zero