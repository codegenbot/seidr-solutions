def sort_third(l: list):
    threes = [x for x in l if x % 3 == 0]
    threes.sort()
    n = len(threes)
    pos = n // 2
    return [i if i % 3 != 0 else threes[pos] for i in l]