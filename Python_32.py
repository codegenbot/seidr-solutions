Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    a = xs[0]
    b = xs[1] if len(xs) > 1 else 0
    c = -xs[-1] / (a * math.pow(xs[-2], len(xs)-2))
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(x, 2)