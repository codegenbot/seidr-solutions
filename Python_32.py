Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    a = xs[0]
    b = 0
    c = 0
    for i in range(1, len(xs)):
        if i % 2 == 1:
            c -= xs[i] / math.factorial(i)
        else:
            b += xs[i] / math.factorial(i)
    x = -b / (2 * c)
    return round(x, 2)