def sort_third(l: list):
    return [l[i + 2] if i % 3 == 0 and i < len(l) - 1 else x for i, x in enumerate(l)]