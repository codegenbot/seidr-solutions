def find_zero(xs: list):
    if len(xs) < 2:
        return "Input list must have at least two elements"
        
    a = xs[-1]
    b = xs[-2]
    return -a / b