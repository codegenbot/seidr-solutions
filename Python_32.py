def find_zero_coefficients():
    coefficients = input("Enter the coefficients (separated by space): ").split()
    for i in range(len(coefficients)):
        coefficients[i] = float(coefficients[i])
    if len(coefficients) % 2 != 0:
        raise ValueError("coefficients must have even number of coefficients")
    return coefficients

def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b_sum = sum(x for x in xs[:-1] if isinstance(x, (int, float)))
    c_sum = sum(x*y for x, y in zip(xs[:-1], range(len(xs)-1)) if isinstance(x, (int, float)) and isinstance(y, int))
    d_sum = sum(x*math.pow(y, 2) for x, y in zip(xs[:-1], range(len(xs)-1)) if isinstance(x, (int, float)) and isinstance(y, int))
    
    if a == 0:
        return "a cannot be zero"
    if b_sum == 0:
        b_sum = -sum(x*y for x, y in zip(xs[:-1], range(len(xs)-1)))
    x = (-b_sum + math.sqrt(b_sum**2 - 4*a*c_sum)) / (2*a)
    return round(x, 2)

import math