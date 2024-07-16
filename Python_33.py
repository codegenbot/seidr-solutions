def sort_third(l: list):
    padding = 3 - len(l) % 3
    l += [None] * padding
    return [sorted([x for x in l[i : i + 3] if x is not None]) for i in range(0, len(l) - padding, 3) if all(x is not None for x in l[i : i + 3])]