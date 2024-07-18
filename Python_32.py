def find_zero(xs: list):
    n = len(xs)
    if n < 2:
        return "Input list should contain at least two elements."
    
    a = xs[-1]
    b = xs[-2]
    if b == 0:
        return "Second last element should be non-zero."
    
    return -a / b