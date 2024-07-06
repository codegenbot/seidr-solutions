Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return "Error: xs must have even number of coefficients"
    leading_coeff = max([abs(i) for i in xs])
    for x in range(-100, 101): # try all possible values
        if poly(xs, x) == 0:
            return round(x, 2)
    return "No zero point found"