```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if not xs:
        raise ValueError("xs cannot be empty")
    
    a = xs[-1]
    b_sum = sum(x for x in xs[:-1] if isinstance(x, (int, float)))
    c_sum = sum(x * i for x, i in zip(xs[:-1], range(len(xs)-1)) if isinstance(x, (int, float)) and isinstance(i, int))
    d_sum = sum(x * i**2 for x, i in zip(xs[:-1], range(len(xs)-1)) if isinstance(x, (int, float)) and isinstance(i, int))
    
    if a == 0:
        return "a cannot be zero"
    if b_sum == 0:
        b_sum = -sum(x * i for x, i in zip(xs[:-1], range(len(xs)-1)))
    x = (-b_sum + math.sqrt(b_sum**2 - 4*a*c_sum)) / (2*a)
    
    return round(x, 2)