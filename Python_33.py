def sort_third(l: list):
    threes = [i for i in l if i % 3 == 0]
    return [i if i % 3 != 0 else (threes[0] if len(threes) > 0 else -1) for i in l]