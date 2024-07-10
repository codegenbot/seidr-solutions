Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return "Error: List xs must have even number of coefficients"
    a = xs[0]
    b = xs[1]
    c = -sum([coeff for i, coeff in enumerate(xs[2:]) if i % 2 == 1])
    d = sum([coeff for i, coeff in enumerate(xs[2:]) if i % 2 == 0])
    
    if a != 0:
        x = (-c + math.sqrt(c**2 - 4*a*d)) / (2*a)
    elif b != 0:
        x = (-c + math.sqrt(c**2 - 4*b)) / (2*b)
    else:
        return "Error: The polynomial is not quadratic or linear"
    
    return round(x, 2)