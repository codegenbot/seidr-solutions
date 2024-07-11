```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    for i in range(0, len(xs), 2):
        if xs[i] == 0:
            return i // 2