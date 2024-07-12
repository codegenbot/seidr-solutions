def sort_even(l: list):
    return [
        y if i % 2 != 0 else sorted([x for x in l if x == y])[0]
        for i, y in enumerate(sorted([x for x in l if x % 2 == 0]))
    ]