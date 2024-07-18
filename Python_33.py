def sort_third(l: list):
    return [sorted(group) for group in zip(*[iter(l)]*3, [])]