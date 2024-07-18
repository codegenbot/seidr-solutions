def find_zero(xs: list):
    if len(xs) < 2 or xs[-1] == 0 or xs[-2] == 0:
        return "Input list should contain at least two non-zero elements."
    a = xs[-1]
    b = xs[-2]
    return -a / b