def sort_even(l: list):
    return [
        y if i % 2 == 0 else x
        for (i, x), (_, y) in enumerate(zip(sorted(l)[::2], sorted(l)[1::2]))
    ]