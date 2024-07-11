```
def sort_third(l: list):
    sorted_threes = [i for i in l if i % 3 == 0]
    return [i if i % 3 != 0 else min(sorted_threes) for i in l]