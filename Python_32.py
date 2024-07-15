```
def find_zero(xs: list):
    return -xs[0] / xs[-1] if len(xs) > 1 else None