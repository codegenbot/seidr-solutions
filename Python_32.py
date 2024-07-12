Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[1]
    b = xs[3] - (n-1)*a
    c = xs[n-1] - (n*(n-1)/2)*a + (n-2)*b
    d = (n*(n-1)*(n-2)/6)*a - (n*(n-1)/2)*b + c
    
    if d == 0:
        return -b / (2*a)
    else:
        r1 = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
        r2 = (-b - math.sqrt(b**2 - 4*a*c)) / (2*a)
        return min(r1, r2)