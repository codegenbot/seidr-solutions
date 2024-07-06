Here is the completed Python code:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    a = xs[-1]
    for i in range(len(xs) // 2):
        b = -xs[2 * i + 1] / (a * (2 * i + 1))
    return round(-b, 2)