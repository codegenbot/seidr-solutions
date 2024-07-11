def sort_even(l: list):
    evens = sorted(
        (x for i, x in enumerate(l) if i % 2 == 0), key=lambda x: (i // 2, x)
    )
    odds = [x for i, x in enumerate(l) if i % 2 != 0]
    return evens + sorted(odds)