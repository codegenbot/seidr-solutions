def find_zero(xs: list):
    a, b, c = xs[0], xs[1], xs[2]
    return (-b + (b**2 - 4*a*c)**0.5) / (2*a)