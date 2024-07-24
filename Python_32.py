Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    a = xs[0]
    b = -xs[1] if n > 1 else 0
    c = (n > 2 and xs[2]) or 0
    d = (n > 3 and (-1 if n % 4 == 0 else 1) * xs[n-1]) or 0
    
    if abs(a) < 10e-6:
        return -b / c
    
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    
    return round(x, 2)