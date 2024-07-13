def sort_third(l: list):
    return [list(g) for g in zip(*[sorted(x) for x in [l[i::3] for i in range(0, len(l), 3)]])]