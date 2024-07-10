def find_zero(xs: list):
    degree = len(xs) // 2
    return round((-xs[degree - 1] / xs[degree]), 2)