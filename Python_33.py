def sort_third(l: list):
    return [y if (i+1) % 3 != 0 else x for i, (x, y) in enumerate(sorted([(x, y) for x, y in zip(l[::3], l[1::3])]))]