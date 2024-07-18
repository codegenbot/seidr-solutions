def find_zero(xs: list):
    if len(xs) < 2:
        return "Input list should contain at least two elements"
    
    a = xs[-1]
    b = xs[-2]
    
    if b == 0:
        return "Division by zero is not allowed"
    
    return -a / b