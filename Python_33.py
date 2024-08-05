def sort_third(l: list):
    return [val for group in zip(*[iter(sorted(l))] * 3) for val in group]