```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    
    xs = list(map(float, input("Enter the coefficients (space separated): ").split()))
    
    a = xs[-1]
    b = -sum((x for x in xs[:-1]))
    c = sum((x * y for x, y in zip(xs[:-1], range(len(xs)-1))))
    d = -sum((x * pow(y, 2) for x, y in zip(xs[:-1], range(len(xs)-1))))
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(x, 2)