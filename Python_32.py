Here is the completed code:

def find_zero(xs: list):
    n = len(xs) // 2
    a = xs[-1]
    b = -sum([coeff for i, coeff in enumerate(xs[:n]) if i % 2 == 0])
    c = sum([coeff for i, coeff in enumerate(xs[:n]) if i % 2 != 0])
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(x, 2)