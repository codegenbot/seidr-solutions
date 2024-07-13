def sort_third(l: list):
    return [sorted([x if i % 3 in (0, 2) else (i, x) for i, x in enumerate(l)], reverse=True)]