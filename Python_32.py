def find_zero(xs: list):
    n = len(xs) // 2
    return round(-xs[n-1] / xs[-1], 2) if xs[-1] != 0 else None