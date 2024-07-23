def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = sorted([x for x in l if x % 2 != 0])
    return [(i, o) for i, o in zip(evens, [x for x in range(len(odds))])]