Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[-1]
    b = -sum(x for x in xs[:-1])
    c = sum(sum([coeff * math.pow(i, j) for j, coeff in enumerate(xs)]) 
             for i in range(len(xs)-1))
    d = -sum(sum([coeff * math.pow(i, j) for j, coeff in enumerate(xs)]) 
              for i in range(len(xs)))
    x = (-b + math.sqrt(b**2-4*a*c)) / (2*a)
    return round(x, 2)