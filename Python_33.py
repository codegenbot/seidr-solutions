def sort_third(l: list):
    return [sorted(group, key=lambda x: x[2]) for group in zip(*[iter(l)]*3)]