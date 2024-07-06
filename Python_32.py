import math

def find_zero():
    xs = input("Enter coefficients of quadratic equation (ax^2 + bx + c = 0), separated by spaces: ").split()
    xs = [float(i) for i in xs]
    
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else 0
    d = xs[3] if n > 3 else 0
    
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(x, 2)

print(find_zero())