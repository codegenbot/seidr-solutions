```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    
    a = xs[1]
    b = xs[3] - xs[0]*a
    c = xs[5] - xs[2]*a + xs[0]**2*a
    
    if math.isclose(c, 0):
        return -b/(2*a)
    else:
        d = math.sqrt(b**2 - 4*a*c)
        return (-b-d)/(2*a), (-b+d)/(2*a)