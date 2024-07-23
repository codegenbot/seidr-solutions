Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[1]
    b = -xs[0]
    c = xs[0] * xs[1] - xs[2]
    d = -(a * xs[0] + b * xs[1] + c * xs[2])
    r1 = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    r2 = (-b - math.sqrt(b**2 - 4*a*c)) / (2*a)
    if abs(r1) > abs(r2):
        return round(r1, 2)
    else:
        return round(r2, 2)