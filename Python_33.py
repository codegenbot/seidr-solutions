```
def sort_third(l: list):
    threes = [x for x in l if x % 3 == 0]
    threes.sort()
    return [i if i % 3 != 0 else threes[0] for i in l]