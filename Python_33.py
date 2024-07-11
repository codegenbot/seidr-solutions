def sort_third(l: list):
    l_copy = l.copy()
    for i in range(0, len(l) - len(l) % 3, 3):
        l_copy[i : i + 3] = sorted(l[i : i + 3])
    return l_copy