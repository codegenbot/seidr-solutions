def find_zero(xs: list):
    if len(xs) < 2:
        raise ValueError("List must have at least two elements")
    a, b, c = xs
    d = math.sqrt((b**2) - (4*a*c))
    return (-b + d)/(2*a)