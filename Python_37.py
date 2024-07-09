def sort_even(l: list):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    odds = [x for i, x in enumerate(l) if i % 2 != 0]

    return [x if y % 2 != 0 else sorted(evens)[y // 2] for y, x in enumerate(odds)]