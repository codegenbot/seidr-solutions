def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = sorted([x for x in l if x % 2 != 0])
    return [y if i < len(evens) else x for i, (x, y) in enumerate(zip(odds, evens))]