```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have exactly three coefficients")
    ax, bx, cx = xs
    return (-bx + abs(bx)**2 - 4*ax*cx) / (2 * ax)