def find_zero(xs: list):
    if len(xs) < 2:
        return "Input list should contain at least two elements"
    
    if xs[-2] == 0:
        return "Division by zero is not allowed"
    
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -a / b