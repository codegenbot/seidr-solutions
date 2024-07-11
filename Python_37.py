def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = sorted([x for x in l if x % 2 != 0])
    return [i if i % 2 != 0 else y for i, y in zip(sorted(l), itertools.cycle(evens + odds))]