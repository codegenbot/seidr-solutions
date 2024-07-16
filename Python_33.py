def sort_third(l: list):
    padding = 3 - len(l) % 3
    l += [None] * padding
    return [sorted(l[i : i + 3]) for i in range(0, len(l), 3) if all(x is not None for x in l[i : i + 3])]