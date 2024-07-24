def sort_even(l: list):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    return [x if i % 2 != 0 else sorted(evens)[i // 2] for i, x in enumerate(l)]