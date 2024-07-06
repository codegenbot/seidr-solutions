def sort_third(l: list):
    return [i if i % 3 != 0 else int(tuple(sorted([x for x in l if x % 3 == 0]))[-1]) for i in l]