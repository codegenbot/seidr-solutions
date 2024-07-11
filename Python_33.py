def sort_third(l: list):
    l = [x for x in l]
    return [sorted(g)[0] if i % 3 == 0 else y for i, (y, *g) in enumerate(list(zip(*[iter(l)]*3)))]