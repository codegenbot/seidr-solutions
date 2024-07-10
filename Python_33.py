def sort_third(l: list):
    odds = [x for i, x in enumerate(l) if i % 2 != 0]
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    middle = sorted([x for i, x in enumerate(l) if i % 2 == 1])

    return [next(x for y, x in zip(evens + odds[::-1], middle) if not x) or next(x for y, x in zip(middle, evens)) for _, x in sorted(zip(odds, range(len(odds))), key=lambda p: (p[1], p[0]))]