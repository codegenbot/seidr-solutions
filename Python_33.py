def sort_third(l: list):
    if len(l) % 3 != 0:
        l += [None] * (3 - len(l) % 3)
    return [sorted(l[i : i + 3]) for i in range(0, len(l), 3)]