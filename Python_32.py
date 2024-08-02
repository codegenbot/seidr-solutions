def find_zero(a: int, b: int, c: int, d: int):
    if b == 0:  # Check if denominator will be zero
        return None
    x = (a * d - b * c) / (b * b - a * c)
    return x