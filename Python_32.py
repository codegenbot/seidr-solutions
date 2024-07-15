Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 == 1:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if len(xs) > 2 else 0
    d = xs[3] if len(xs) > 3 else 0
    
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    
    return round(x, 2)