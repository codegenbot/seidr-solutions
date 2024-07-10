Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else None
    d = xs[3] if n > 3 else None
    
    if c is not None and d is not None:
        x1 = (-b + math.sqrt(b**2 - 4*a*c)) / (2 * a)
        x2 = (-b - math.sqrt(b**2 - 4*a*c)) / (2 * a)
        
        if abs(poly([1, x1], xs)) < abs(poly([1, x2], xs)):
            return round(x1, 2)
        else:
            return round(x2, 2)
    elif c is not None:
        return -b / (2 * a)
    else:
        return -b / b