def sort_third(l: list):
    l += [None] * ((3 - len(l) % 3) % 3)
    return [sorted(l[i:i+3]) if l[i+2] is not None else l[i] for i in range(0, len(l), 3)]