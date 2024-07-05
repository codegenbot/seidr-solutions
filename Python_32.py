```
def find_zero(xs):
    n = len(xs)
    if n < 2:
        a, b = xs[0], 1
    elif n == 2:
        a, b = xs[0], xs[1]
    else:
        a, b, c = xs[0], xs[-1], xs[-3]
    d = math.sqrt((b**2) - (4 * a * c))
    return (-b + d) / (2 * a)