Here is the completed code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return "Input must have even number of coefficients"
    root = xs[1] / xs[0]
    for i in range(3, len(xs), 2):
        if abs(math.pow(root, i)) > abs(root):
            return round(root, 2)
    return round(root, 2)