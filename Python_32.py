def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    a = max(xs, key=abs)
    for i in range(-1000, 1000):
        if poly(xs, i) == 0:
            return i