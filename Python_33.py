def sort_third(lst):
    numbers = sorted([x for x in lst if isinstance(x, (int, float))])
    others = [item for sublist in [i for i in lst if isinstance(i, list)] for item in sublist]
    return sorted(others, key=len) + numbers