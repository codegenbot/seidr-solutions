def find_zero(xs: list):
    a = xs[0]
    b = xs[1]
    c = xs[2]

    if len(xs) == 4:
        n = xs[3]
        return (-b + (b**2 - 4*a*c)**0.5)/(2*a), (-b - (b**2 - 4*a*c)**0.5)/(2*a)
    else:
        return -b / (2 * a)