def find_zero(a0: float, a1: float, a2: float):
    x = (-a1 + (a1**2 - 4 * a0 * a2) ** 0.5) / (2 * a0)
    return round(x, 2)