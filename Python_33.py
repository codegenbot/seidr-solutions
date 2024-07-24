def sort_third(l: list):
    return [x if x % 3 != 0 else min([i for i in l if i % 3 == 0]) for x in l]