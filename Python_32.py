Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[1]
    b = -xs[0]
    c = xs[0] * xs[1] - xs[2]
    d = -math.pow(a, 3) + math.pow(c, 2)*a
    e = 2*math.pow(c, 3)-math.pow(b, 2)*c
    f = b*math.pow(c, 2)-math.pow(a, 2)*b
    g = -d/e if e != 0 else float('inf')
    x1 = (-g + math.sqrt(math.pow(g, 2) - 4*d*e)) / (2*3)
    return round(x1, 2)