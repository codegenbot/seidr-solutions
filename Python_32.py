Here is the solution:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("Number of coefficients must be even.")
    
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else None
    
    x = -b / (2 * a) if c is None else (-b + math.sqrt(b**2 - 4*a*c)) / (2 * a)
    
    return round(x, 2)