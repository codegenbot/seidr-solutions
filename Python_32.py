Here is the completed code:

def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return "Error: Input should have an even number of coefficients"
    a = xs[-1]
    b = -xs[-2] / a
    x = -b / 2
    return round(x, 2)