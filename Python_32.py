Here is the solution:

def find_zero(xs: list):
    a = xs[0]
    b = sum([coeff * i for i, coeff in enumerate(xs[1:], 1)])
    c = sum([coeff * math.factorial(i) for i, coeff in enumerate(xs[2:], 2)])
    
    return -b / c if abs(c) > 1e-10 else None