def find_zero(xs):
    if len(xs) % 2 != 0:
        return "Error: xs must have an even number of coefficients"
    
    x, y = 0, 1
    for coefficient in xs:
        x, y = y, coefficient * x + y
    
    return -y / (2 * x)