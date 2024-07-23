def sort_even(l: list):
    return [
        min([x for i, x in enumerate(l) if i % 2 == 0]) if i % 2 != 0 else x
        for i, x in enumerate(l)
    ]