def find_zero(xs: list):
    if len(xs) < 2:
        return "Input list must contain at least 2 elements"
    
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    
    if b == 0:
        return "Division by zero error"
    
    return -a / b