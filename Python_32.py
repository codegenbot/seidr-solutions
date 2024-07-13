def find_zero(coefficients):
    a, b, c = coefficients
    x1 = (-b + (b**2 - 4*a*c)**0.5) / (2*a)
    x2 = (-b - (b**2 - 4*a*c)**0.5) / (2*a)
    return f"The zero points are {x1:.2f} and {x2:.2f}."