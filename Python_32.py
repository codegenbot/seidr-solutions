def find_zero(xs: list):
    if len(xs) < 2:
        raise ValueError("Input list must contain at least two elements")
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    if b == 0:
        raise ValueError("Division by zero error")
    return -a / b