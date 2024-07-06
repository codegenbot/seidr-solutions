Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = 0
    c = 0
    for i in range(len(xs)):
        if i % 2 == 1:
            c += xs[i] / math.factorial(i)
        else:
            a -= xs[i] / math.factorial(i)
    x = -b / (2 * c)
    return round(x, 10)