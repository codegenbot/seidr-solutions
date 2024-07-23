def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0], key=lambda x: l.index(x))
    odds = sorted([x for x in l if x % 2 != 0], key=lambda x: l.index(x))
    return evens + odds