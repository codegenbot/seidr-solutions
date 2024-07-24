def sort_third(l: list):
    return [val if i % 3 != 0 else sorted([x for x in l if i % 3 == 0])[i//3] for i, val in enumerate(l)]