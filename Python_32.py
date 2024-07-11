import math


def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    
    for i in xs:
        try:
            float(i)
        except ValueError:
            return "Invalid input. Please enter only numbers separated by spaces."
            
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else 0
    d = xs[3] if n > 3 else 0
    
    if n < 4:
        return "Not enough coefficients"
    
    x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
    return round(x, 2)


xs = list(map(float, input("Enter coefficients (space-separated): ").split()))
print(find_zero(xs))