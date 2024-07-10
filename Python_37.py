def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = [x for x in l if x % 2 != 0]
    return [x if i < len(evens) else y for i, (x, y) in enumerate(zip(odds, l[1::]))]