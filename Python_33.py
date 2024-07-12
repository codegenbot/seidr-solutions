def sort_third(l: list):
    remainder = len(l) % 3
    if remainder != 0:
        l += [-1] * (3 - remainder)
    return [sorted(l[i:i+3], reverse=True) for i in range(0, len(l), 3)]