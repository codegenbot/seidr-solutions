def find_zero(xs: list):
    a = xs[0]
    b = xs[1]
    c = xs[2]
    
    x1 = (-b + math.sqrt((b**2) - (4*a*c)))/(2*a)
    x2 = (-b - math.sqrt((b**2) - (4*a*c)))/(2*a)

    return x1, x2