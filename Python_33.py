def sort_third(l: list):
    return [elem for group in zip(*[iter(sorted(l))]*3) for elem in group]