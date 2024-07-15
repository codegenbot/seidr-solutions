def sort_third(l: list):
    return [sorted(lst) if len(lst) == 3 else lst for lst in zip(*[iter(l)] * 3)]