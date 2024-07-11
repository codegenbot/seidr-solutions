def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = [i for i in l if i % 2 != 0]
    return [
        i if i % 2 != 0 else y
        for i, y in zip(sorted(l), *reversed(list(zip(evens, itertools.cycle(odds)))))
    ]