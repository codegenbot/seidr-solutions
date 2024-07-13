def sort_third(l: list):
    l = [[x for i, x in enumerate(y) if i % 3 in [0, 1)] for y in zip(*[iter(l)]*3)]
    return [sorted(x) if i % 3 == 2 else x for i, x in enumerate(l)]