def find_zero(a: float, b: float, c: float):
    if b**2 - 4*a*c < 0:
        raise ValueError("No real roots for this polynomial.")
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(x, 2)