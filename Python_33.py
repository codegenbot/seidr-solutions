def sort_third(l: list):
    threes = [i for i in l if i % 3 == 0]
    return [i if i % 3 != 0 else sorted(threes)[::-1].pop(0) for i in l]