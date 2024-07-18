def sort_third(l: list):
    return [list(sorted(group)) for group in zip(*[iter(l)]*3)]