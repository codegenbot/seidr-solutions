Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    a = xs[0]
    b = xs[1] if n > 1 else 0
    for i in range(2, n):
        b -= xs[i] * math.pow(b, -i + 1)
    return round(-b / xs[-1], 2)