Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have even number of coefficients")
    if max(abs(x) for x in xs) == 0:
        raise ValueError("Largest non zero coefficient required")
    
    n = len(xs)
    a, b = xs[0], xs[n-1]
    c = -sum(xs[i] * math.pow(-a / (n-1), i) for i in range(2, n))
    
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(x, 2)