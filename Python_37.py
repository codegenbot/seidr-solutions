def sort_even(l: list):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    odds = [x for i, x in enumerate(l) if i % 2 != 0]

    return [
        x if i % 2 != 0 else y for (i, (y, x)) in enumerate(sorted(zip(evens + odds)))
    ]