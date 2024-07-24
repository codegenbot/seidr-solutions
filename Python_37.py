def sort_even(l: list):
    evens = sorted([x for x in l if 0 <= x % 2], key=lambda x: abs(x))
    odds = sorted([x for x in l if x % 2 != 0], reverse=True)
    return tuple(evens) + tuple(odds)