def sort_third(l: list):
    return [i if i % 3 != 0 else sorted([x for x in l if x % 3 == 0])[-1] for i in l]
assert tuple(map(int, sort_third([5, 6, 3, 4, 8, 9, 2, 1]))) == tuple(