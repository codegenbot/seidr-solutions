```"
def find_zero(xs: list):
    "if the length of the input list xs is odd, raise a ValueError with an appropriate error message. 
    else, calculate and return the zero point for the given quadratic equation (ax^2 + bx + c = 0)"
    if len(xs) % 2 != 0:
        raise ValueError("List xs must have even number of coefficients")
    c = xs[1]
    a = xs[-1]
    b = -xs[0] / a
    return round(-b / (2*a), 2)
"```