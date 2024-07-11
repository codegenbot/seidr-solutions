def sort_third(l: list):
    l.sort()
    return [l[i] if i % 3 != 0 else l[l.index(x)][1 - ((i-1) % 3)] for i, x in enumerate(sorted(l))]